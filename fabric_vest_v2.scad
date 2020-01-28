/*
  parametric fabric design using openScad for configurable motor matrix 

  modified Date
  by __

  designed by 18 Dec 2019
  by Jude Terrance D'suza
  written 18 Dec 2019
  by Ravi Sinha ( github username: ravi312)
  
  MIT Licence
  
*/

fab_x=35*4;
fab_y=30*1.;
fab_z=0.8;

block_x=10;
block_y=5;
block_z=5+fab_z;

slot_t=0.5;

space_x=2;
space_y=4;

matrix=8;

generate();

module generate(){
    
    difference(){
        
        union(){
            fabric();
            translate([10,10,0])block(matrix-1);
            translate([10,10+block_y+space_y,0])block(matrix-1);
            translate([10,10+block_y+space_y,0])block(matrix-1);
        }
        translate([10,10,0])slot(matrix-1);
        translate([10,10+block_y+space_y,0])slot(matrix-1);
    }
}  

module fabric(){
    cube([fab_x,fab_y,fab_z]);
}

module block(matrix){
  
    for (i=[0:matrix]){
                translate([(block_x+space_x)*i,0,0])
                cube([block_x,block_y,block_z]);
              
    }
    
    
}

module slot(matrix){
    translate([slot_t,slot_t,0]){
        for (i=[0:matrix]){
                    translate([(block_x+space_x)*i,0,0])
                    cube([block_x-2*slot_t,block_y-2*slot_t,block_z]);
                  
        }
    }
}

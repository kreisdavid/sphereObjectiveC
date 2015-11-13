//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Dave on 11/12/15.
//  Copyright © 2015 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sphere : NSObject {
    NSArray *_center;
    float _radius;
}

-(void)setRadius:(float)radius;
-(float)radius;

-(void)setCenter:(NSArray *)center;
-(NSArray *)center;

@end

//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Dave on 11/12/15.
//  Copyright © 2015 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sphere : NSObject

@property(nonatomic) float radius;
@property(nonatomic, strong) NSArray *center;

-(void)setCenter:(NSArray *)center radius:(float)radius;

@end

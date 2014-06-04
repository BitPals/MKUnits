//
//  MKVolumeUnit.h
//  MKUnits
//
//  Created by Michal Konturek on 02/06/2014.
//  Copyright (c) 2014 Michal Konturek. All rights reserved.
//

#import "MKUnit.h"
#import "MKQuantity.h"

@interface MKVolumeUnit : MKUnit

+ (instancetype)microlitre;
+ (instancetype)millilitre;
+ (instancetype)centilitre;
+ (instancetype)decilitre;
+ (instancetype)litre;
+ (instancetype)hectolitre;

@end
//
//  XYZPerson.h
//  Exercises
//
//  Created by Lars Soltau on 11.04.13.
//  Copyright (c) 2013 Profics. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZPerson : NSObject

@property NSString *firstName;
@property NSString *lastName;
@property NSDate *birthDate;

- (void) sayHello;

+ (XYZPerson *) person;

@end

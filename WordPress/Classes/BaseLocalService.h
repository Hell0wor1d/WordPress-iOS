/*
 * BaseLocalService.h
 *
 * Copyright (c) 2014 WordPress. All rights reserved.
 *
 * Licensed under GNU General Public License 2.0.
 * Some rights reserved. See license.txt
 */

#import <Foundation/Foundation.h>

@protocol BaseLocalService <NSObject>

@required

- (id)initWithManagedObjectContext:(NSManagedObjectContext *)context;

@end

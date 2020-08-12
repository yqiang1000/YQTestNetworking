//
//  Person.h
//  FBSnapshotTestCase
//
//  Created by yeqiang on 2020/8/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject

@property (nonatomic, copy) NSString *name;

@property (nonatomic, assign) NSInteger age;

- (void)eatFood:(NSString *)food;

@end

NS_ASSUME_NONNULL_END

@class NSNumber, NSArray;

@interface MTRContentControlClusterTimeWindowStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *timeWindowIndex;
@property (copy, nonatomic) NSNumber *dayOfWeek;
@property (copy, nonatomic) NSArray *timePeriod;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end

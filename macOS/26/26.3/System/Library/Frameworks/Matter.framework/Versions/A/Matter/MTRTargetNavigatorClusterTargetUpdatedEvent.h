@class NSArray, NSNumber, NSData;

@interface MTRTargetNavigatorClusterTargetUpdatedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *targetList;
@property (copy, nonatomic) NSNumber *currentTarget;
@property (copy, nonatomic) NSData *data;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

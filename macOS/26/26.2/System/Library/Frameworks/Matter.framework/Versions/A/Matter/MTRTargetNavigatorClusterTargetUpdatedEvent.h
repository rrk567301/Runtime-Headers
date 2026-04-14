@class NSArray, NSNumber, NSData;

@interface MTRTargetNavigatorClusterTargetUpdatedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *targetList;
@property (copy, nonatomic) NSNumber *currentTarget;
@property (copy, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

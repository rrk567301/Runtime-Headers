@class NSNumber;

@interface MTRClosureControlClusterOverallCurrentStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *position;
@property (copy, nonatomic) NSNumber *latch;
@property (copy, nonatomic) NSNumber *speed;
@property (copy, nonatomic) NSNumber *secureState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

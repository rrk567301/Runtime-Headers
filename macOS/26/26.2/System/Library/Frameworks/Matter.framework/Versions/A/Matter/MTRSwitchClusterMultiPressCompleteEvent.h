@class NSNumber;

@interface MTRSwitchClusterMultiPressCompleteEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousPosition;
@property (copy, nonatomic, getter=getNewPosition) NSNumber *newPosition;
@property (copy, nonatomic) NSNumber *totalNumberOfPressesCounted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

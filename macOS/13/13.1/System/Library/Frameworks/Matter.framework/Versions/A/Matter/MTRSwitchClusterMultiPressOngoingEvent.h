@class NSNumber;

@interface MTRSwitchClusterMultiPressOngoingEvent : NSObject <NSCopying>

@property (copy, nonatomic, getter=getNewPosition) NSNumber *newPosition;
@property (copy, nonatomic) NSNumber *currentNumberOfPressesCounted;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

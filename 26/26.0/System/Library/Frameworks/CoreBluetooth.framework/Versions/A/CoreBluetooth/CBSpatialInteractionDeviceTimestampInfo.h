@interface CBSpatialInteractionDeviceTimestampInfo : NSObject

@property (nonatomic) unsigned char duplicateCount;
@property (nonatomic) unsigned char reason;
@property (nonatomic) double timestamp;

- (id)descriptionWithLevel:(int)a0;
- (id)description;

@end

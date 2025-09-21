@class NSNumber, NSDate;

@interface HMDCameraRecordingReachabilityEventModel : HMBModel

@property (retain) NSNumber *reachableField;
@property (retain) NSDate *dateOfOccurrence;
@property char reachable;

+ (id)hmbExternalRecordType;
+ (id)hmbProperties;

- (id)createEvent;

@end

@class NSString, NSNumber, NSDate;

@interface IntelligencePlatformDataActions.ActivitySegment : NSObject

@property (nonatomic, retain) NSString *deviceId;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, retain) NSString *icloudEmail;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, retain) NSNumber *duration;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSNumber *isApplication;

- (id)init;
- (void).cxx_destruct;

@end

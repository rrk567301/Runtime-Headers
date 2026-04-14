@class NSString;

@interface BWFigCaptureDeviceVendorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int timerReason;
@property (nonatomic) int idleOpenDuration;
@property (nonatomic) BOOL deviceUsed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)eventDictionary;
- (id)eventName;
- (void)dealloc;
- (void)reset;

@end

@interface FTTelephonyCapabilityManager : NSObject

@property (nonatomic) char supportsTelephonyCallsCapability;
@property (nonatomic) char hasCheckedForTelephonySupport;
@property (nonatomic) char telephonyIsEnabled;
@property (nonatomic) char hasCheckedForTelephonyEnabled;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)supportsTelephonyCalls;
- (char)isRelayCallingEnabled;
- (char)isThumperCallingEnabled;
- (void)capabilitiesDidChange:(id)a0;
- (char)hasTelephonyCapability;
- (char)isTelephonyEnabled;

@end

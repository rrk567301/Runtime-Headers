@interface FTTelephonyCapabilityManager : NSObject

@property (nonatomic) BOOL supportsTelephonyCallsCapability;
@property (nonatomic) BOOL hasCheckedForTelephonySupport;
@property (nonatomic) BOOL telephonyIsEnabled;
@property (nonatomic) BOOL hasCheckedForTelephonyEnabled;

+ (id)sharedInstance;

- (BOOL)hasTelephonyCapability;
- (void)capabilitiesDidChange:(id)a0;
- (BOOL)isThumperCallingEnabled;
- (void)dealloc;
- (BOOL)supportsTelephonyCalls;
- (BOOL)isRelayCallingEnabled;
- (id)init;
- (BOOL)isTelephonyEnabled;

@end

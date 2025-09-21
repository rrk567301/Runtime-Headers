@interface FTTelephonyCapabilityManager : NSObject

@property (nonatomic) BOOL supportsTelephonyCallsCapability;
@property (nonatomic) BOOL hasCheckedForTelephonySupport;
@property (nonatomic) BOOL telephonyIsEnabled;
@property (nonatomic) BOOL hasCheckedForTelephonyEnabled;

+ (id)sharedInstance;

- (BOOL)hasTelephonyCapability;
- (void)dealloc;
- (BOOL)supportsTelephonyCalls;
- (BOOL)isThumperCallingEnabled;
- (id)init;
- (BOOL)isRelayCallingEnabled;
- (void)capabilitiesDidChange:(id)a0;
- (BOOL)isTelephonyEnabled;

@end

@interface FTTelephonyCapabilityManager : NSObject

@property (nonatomic) BOOL supportsTelephonyCallsCapability;
@property (nonatomic) BOOL hasCheckedForTelephonySupport;
@property (nonatomic) BOOL telephonyIsEnabled;
@property (nonatomic) BOOL hasCheckedForTelephonyEnabled;

+ (id)sharedInstance;

- (BOOL)supportsTelephonyCalls;
- (BOOL)isThumperCallingEnabled;
- (id)init;
- (void)capabilitiesDidChange:(id)a0;
- (BOOL)isRelayCallingEnabled;
- (BOOL)hasTelephonyCapability;
- (void)dealloc;
- (BOOL)isTelephonyEnabled;

@end

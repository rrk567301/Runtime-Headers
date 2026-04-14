@interface FTTelephonyCapabilityManager : NSObject

@property (nonatomic) BOOL supportsTelephonyCallsCapability;
@property (nonatomic) BOOL hasCheckedForTelephonySupport;
@property (nonatomic) BOOL telephonyIsEnabled;
@property (nonatomic) BOOL hasCheckedForTelephonyEnabled;

+ (id)sharedInstance;

- (BOOL)hasTelephonyCapability;
- (BOOL)isRelayCallingEnabled;
- (id)init;
- (BOOL)supportsTelephonyCalls;
- (void)dealloc;
- (void)capabilitiesDidChange:(id)a0;
- (BOOL)isThumperCallingEnabled;
- (BOOL)isTelephonyEnabled;

@end

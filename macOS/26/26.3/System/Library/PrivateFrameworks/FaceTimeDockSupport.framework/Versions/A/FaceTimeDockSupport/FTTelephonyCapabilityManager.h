@interface FTTelephonyCapabilityManager : NSObject

@property (nonatomic) BOOL supportsTelephonyCallsCapability;
@property (nonatomic) BOOL hasCheckedForTelephonySupport;
@property (nonatomic) BOOL telephonyIsEnabled;
@property (nonatomic) BOOL hasCheckedForTelephonyEnabled;

+ (id)sharedInstance;

- (id)init;
- (void)capabilitiesDidChange:(id)a0;
- (BOOL)isRelayCallingEnabled;
- (BOOL)isThumperCallingEnabled;
- (void)dealloc;
- (BOOL)supportsTelephonyCalls;
- (BOOL)hasTelephonyCapability;
- (BOOL)isTelephonyEnabled;

@end

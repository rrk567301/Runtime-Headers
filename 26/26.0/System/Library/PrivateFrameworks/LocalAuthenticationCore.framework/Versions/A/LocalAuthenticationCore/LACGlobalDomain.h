@class NSData, NSNumber;

@interface LACGlobalDomain : NSObject <LACGlobalDomain, LACGlobalDomainDTO, LACGlobalDomainPreboard>

@property (class, nonatomic, copy) NSData *companionAuthentication;
@property (class, nonatomic) BOOL isCompanionDeviceMocked;
@property (class, nonatomic, retain) NSNumber *isMacCompanionSessionActive;
@property (class, nonatomic, retain) NSNumber *isVisionCompanionSessionActive;
@property (class, nonatomic) BOOL releaseUIDelegate;
@property (class, nonatomic, retain) NSNumber *runningInBATS;
@property (class, nonatomic, retain) NSNumber *isSharedModeActive;
@property (class, nonatomic, retain) NSNumber *sharedModeLatency;
@property (class, nonatomic) BOOL useTestAppleKeyStoreDaemon;
@property (class, nonatomic, readonly) BOOL osVariantAllowsDomainOverrides;

@property (nonatomic, retain) NSNumber *isDTOStrictModeEnabled;
@property (nonatomic, retain) NSNumber *preboardMode;

+ (id)sharedInstance;

@end

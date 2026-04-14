@class NSData, NSNumber;

@interface LACGlobalDomain : NSObject

@property (class, nonatomic, copy) NSData *companionAuthentication;
@property (class, nonatomic, retain) NSNumber *isCompanionSessionActive;
@property (class, nonatomic) BOOL isCompanionDeviceMocked;
@property (class, nonatomic, retain) NSNumber *preboardMode;
@property (class, nonatomic) BOOL isDTOStrictModeEnabled;
@property (class, nonatomic, retain) NSNumber *isSharedModeActive;
@property (class, nonatomic, retain) NSNumber *sharedModeLatency;
@property (class, nonatomic, readonly) BOOL osVariantAllowsDomainOverrides;

- (id)init;

@end

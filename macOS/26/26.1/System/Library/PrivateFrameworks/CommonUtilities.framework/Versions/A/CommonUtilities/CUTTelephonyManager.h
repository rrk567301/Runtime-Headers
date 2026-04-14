@class NSMutableSet, NSRecursiveLock;

@interface CUTTelephonyManager : NSObject

@property (nonatomic) BOOL registered;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableSet *disableFastDormancyTokens;
@property (readonly, nonatomic) BOOL disableFastDormancy;

+ (id)sharedInstance;

- (void)addFastDormancyDisableToken:(id)a0;
- (void)removeFastDormancyDisableToken:(id)a0;
- (void)_adjustFastDormancyTokens;
- (void)dealloc;
- (void)_setFastDormancySuspended:(BOOL)a0;
- (void).cxx_destruct;
- (void)__adjustFastDormancyTokens;
- (id)init;

@end

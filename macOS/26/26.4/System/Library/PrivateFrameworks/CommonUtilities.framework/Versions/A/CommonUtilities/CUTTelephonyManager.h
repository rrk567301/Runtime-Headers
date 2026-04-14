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
- (void).cxx_destruct;
- (id)init;
- (void)_setFastDormancySuspended:(BOOL)a0;
- (void)dealloc;
- (void)__adjustFastDormancyTokens;

@end

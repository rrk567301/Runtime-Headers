@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface PowerUIChargingController : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableDictionary *tokenDict;
@property (retain, nonatomic) NSLock *chargeLimitLock;

+ (id)sharedInstance;

- (struct __CFString { } *)registerNewTokenForPreferenceKey:(id)a0 forReason:(id)a1;
- (void)clearAllChargeLimits;
- (void).cxx_destruct;
- (BOOL)setChargeLimitTo:(long long)a0 forLimitType:(unsigned long long)a1;
- (struct __CFString { } *)loadChargeLimitTokenForPreferenceKey:(id)a0 forReason:(id)a1 verbose:(BOOL)a2;
- (BOOL)setChargeLimitTo:(long long)a0 forLimitType:(unsigned long long)a1 setNoChargeToFull:(BOOL)a2;
- (id)readNumberForPreferenceKey:(id)a0;
- (void)setNumber:(id)a0 forPreferenceKey:(id)a1;
- (id)init;
- (void)clearChargeLimitForLimitType:(unsigned long long)a0;

@end

@class NSMutableArray, IMDispatchTimer;

@interface IDSRegistrationKeychainReader : NSObject {
    NSMutableArray *_registrationData;
    IMDispatchTimer *_purgeTimer;
    id /* block */ _purgeCancelBlock;
    id /* block */ _purgeEnqueueBlock;
}

+ (id)sharedInstance;
+ (id)keychainAccountForVersion:(unsigned long long)a0;
+ (id)keychainServiceForVersion:(unsigned long long)a0;
+ (id)keychainAccessGroupForVersion:(unsigned long long)a0;

- (void)_reloadFromDictionaryLocked:(id)a0;
- (void)_flush;
- (id)init;
- (void)_setPurgeTimer;
- (void).cxx_destruct;
- (void)flushCache;
- (void)dealloc;
- (id)registrationWithServiceType:(id)a0 accountType:(int)a1 isTemporary:(BOOL)a2 value:(id)a3;
- (id)registrationData;
- (void)_reloadFromKeychainLocked;

@end

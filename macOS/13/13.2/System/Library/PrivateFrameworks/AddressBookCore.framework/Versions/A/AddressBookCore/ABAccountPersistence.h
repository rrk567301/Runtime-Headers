@class NSString, NSMutableDictionary;
@protocol ABAccountPersistenceDelegate, ABAccountPersistenceBackend, CNCancelable;

@interface ABAccountPersistence : NSObject {
    id<ABAccountPersistenceBackend> _backend;
    NSString *_accountType;
    id<CNCancelable> _delayedApplyToken;
    NSMutableDictionary *_persistentValues;
}

@property (getter=isInvalidated) BOOL invalidated;
@property BOOL hasChanges;
@property (weak) id<ABAccountPersistenceDelegate> delegate;

- (void)dealloc;
- (id)description;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)acAccountIdentifier;
- (BOOL)loadPersistentValues;
- (void)rediscoverPersistentValuesWithCompletionHandler:(id /* block */)a0;
- (void)deletePersistentValuesWithAddressBook:(id)a0;
- (id)initWithBackend:(id)a0 accountType:(id)a1;
- (void)applyChanges:(id)a0;
- (void)applyChangesAndRefresh:(BOOL)a0;
- (void)persistValuesAndPostDidChangeNotifcation:(BOOL)a0;
- (BOOL)savePersistentValuesAndPostDidChangeNotification:(BOOL)a0;
- (id)allPersistentValues;
- (id)scheduleDelayedApply;
- (void)setDelayedApplyToken:(id)a0;
- (void)delayedApplyChanges;
- (void)nts_removeObjectForKey:(id)a0;
- (void)nts_setObject:(id)a0 forKey:(id)a1;
- (void)setUnsignedInteger:(unsigned long long)a0 forKey:(id)a1;
- (unsigned long long)unsignedIntegerForKey:(id)a0;
- (void)_sourceShouldRefreshImmediately;

@end

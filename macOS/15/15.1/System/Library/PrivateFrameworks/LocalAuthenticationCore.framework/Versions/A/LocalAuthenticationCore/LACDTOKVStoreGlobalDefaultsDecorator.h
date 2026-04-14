@class NSString;
@protocol LACDTOKVStore;

@interface LACDTOKVStoreGlobalDefaultsDecorator : NSObject <LACDTOKVStore> {
    id<LACDTOKVStore> _store;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKVStore:(id)a0;
- (void)setValue:(id)a0 forKey:(long long)a1 completion:(id /* block */)a2;
- (void)_setStrictModeValue:(id)a0 completion:(id /* block */)a1;
- (void)_strictModeValueWithCompletion:(id /* block */)a0;
- (BOOL)_isStricModeEnabled;
- (BOOL)_isStrictModeKey:(long long)a0;
- (void)setValue:(id)a0 forKey:(long long)a1 connection:(id)a2 completion:(id /* block */)a3;
- (void)setValue:(id)a0 forKey:(long long)a1 contextUUID:(id)a2 completion:(id /* block */)a3;
- (void)setValue:(id)a0 forKey:(long long)a1 contextUUID:(id)a2 connection:(id)a3 completion:(id /* block */)a4;
- (void)valueForKey:(long long)a0 completion:(id /* block */)a1;
- (void)valueForKey:(long long)a0 connection:(id)a1 completion:(id /* block */)a2;

@end

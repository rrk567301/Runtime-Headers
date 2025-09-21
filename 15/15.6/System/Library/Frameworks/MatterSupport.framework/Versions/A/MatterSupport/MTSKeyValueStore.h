@class NSDictionary, MTSKeychainStore, NSString;

@interface MTSKeyValueStore : NSObject <HMFLogging>

@property (readonly) MTSKeychainStore *keychainStore;
@property (readonly, copy) NSDictionary *storedValuesByKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)storedValueForKey:(id)a0;
- (char)removeAllStoredValuesWithError:(id *)a0;
- (id)initWithKeychainStore:(id)a0;
- (char)removeStoredValueForKey:(id)a0 error:(id *)a1;
- (char)setStoredValue:(id)a0 forKey:(id)a1 error:(id *)a2;

@end

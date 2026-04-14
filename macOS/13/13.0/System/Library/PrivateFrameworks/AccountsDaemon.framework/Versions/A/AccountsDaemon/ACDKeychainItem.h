@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface ACDKeychainItem : NSObject {
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
}

@property (readonly, nonatomic) const struct __CFData { } *persistentRef;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic) NSString *accessibility;
@property (nonatomic) BOOL synchronizable;
@property (readonly, nonatomic) BOOL useDataProtectionKeychain;
@property (readonly, nonatomic) BOOL hasCustomAccessControl;
@property (copy, nonatomic) NSDictionary *metadata;
@property (nonatomic) long long version;

+ (id)new;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)_reloadProperties;
- (BOOL)save:(id *)a0;
- (void)_markPropertyDirty:(id)a0;
- (void)_clearDirtyProperties;
- (void)reload;
- (id)initWithPersistentRef:(const struct __CFData { } *)a0;
- (id)initWithPersistentRef:(const struct __CFData { } *)a0 properties:(id)a1;
- (void)migrateToKeyBagFromLegacy;
- (id)_metadataWithError:(id *)a0;
- (BOOL)_setMetadata:(id)a0 withError:(id *)a1;
- (void)_setValue:(id)a0 forProperty:(id)a1;
- (id)_modifiedProperties;

@end

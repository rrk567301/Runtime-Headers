@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface ACDKeychainItem : NSObject {
    NSMutableDictionary *_properties;
    NSMutableSet *_dirtyProperties;
}

@property (readonly, nonatomic) struct __CFData { } *persistentRef;
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

- (id)initWithPersistentRef:(struct __CFData { } *)a0;
- (id)debugDescription;
- (void)dealloc;
- (void)reload;
- (BOOL)save:(id *)a0;
- (void)migrateToKeyBagFromLegacy;
- (id)initWithPersistentRef:(struct __CFData { } *)a0 properties:(id)a1;
- (id)init;
- (void)_markPropertyDirty:(id)a0;
- (void)_clearDirtyProperties;
- (id)description;
- (BOOL)_setMetadata:(id)a0 withError:(id *)a1;
- (void)_reloadProperties;
- (id)_metadataWithError:(id *)a0;
- (id)_modifiedProperties;
- (void)_setValue:(id)a0 forProperty:(id)a1;
- (void).cxx_destruct;

@end

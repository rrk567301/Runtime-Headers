@class NSString, NSData;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString *_password;
    NSString *_identifier;
    NSData *_persistentReference;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NEKeychainItem *oldItem;
@property (readonly) BOOL legacy;
@property long long domain;
@property (copy) NSString *identifier;
@property (copy) NSString *password;
@property (copy) NSData *persistentReference;
@property (copy) NSString *accessGroup;

+ (int)getPreferencesDomainForItemDomain:(long long)a0;
+ (BOOL)setDomain:(int)a0 outOldDomain:(int *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)remove;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithPassword:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (void)syncUsingConfiguration:(id)a0 accountName:(id)a1 passwordType:(long long)a2 identifierSuffix:(id)a3;
- (void)addAppPathsToACL:(id)a0;
- (id)initWithIdentifier:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithPersistentReference:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)initWithLegacyIdentifier:(id)a0 domain:(long long)a1 accessGroup:(id)a2;
- (id)copyQueryWithReturnTypes:(id)a0;
- (BOOL)copyKeychainItem:(struct __SecKeychainItem **)a0 copyPrivateKey:(BOOL)a1;
- (void)addPathtoTrustedApplications:(id)a0 trustedApplications:(struct __CFArray { } *)a1;
- (BOOL)copyDataFromKeychainItem:(void *)a0 outPassword:(id *)a1 outIdentifier:(id *)a2 outPersistentReference:(id *)a3;
- (id)copyKindForPasswordType:(long long)a0;
- (void)setChangeACLList:(struct __SecAccess { } *)a0;
- (id)copyPassword;
- (BOOL)addOrUpdateWithConfiguration:(id)a0 passwordType:(long long)a1 accountName:(id)a2 identifierSuffix:(id)a3;
- (id)initWithPassword:(id)a0 domain:(long long)a1;
- (id)initWithIdentifier:(id)a0 domain:(long long)a1;
- (id)initWithPersistentReference:(id)a0 domain:(long long)a1;
- (id)initWithLegacyIdentifier:(id)a0 domain:(long long)a1;
- (void)setIdentifierInternal:(id)a0;
- (void)migrateFromPreferences:(struct __SCPreferences { } *)a0;

@end

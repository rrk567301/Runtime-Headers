@interface SFKeychainStorage : NSObject

+ (id)remoteStoreNameForKeychainRef:(struct __SecKeychain { } *)a0;
+ (BOOL)isCloudKeychainSyncEnabled;
+ (id)displayNameForKeychainAtPath:(id)a0 keychainRef:(struct __SecKeychain { } *)a1;
+ (id)displayNameForKeychainAtPath:(id)a0;
+ (id)displayNameForKeychainRef:(struct __SecKeychain { } *)a0;

@end

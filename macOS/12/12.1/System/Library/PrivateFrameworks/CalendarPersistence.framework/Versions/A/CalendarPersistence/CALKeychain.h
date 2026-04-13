@interface CALKeychain : NSObject

+ (id)sharedKeychain;
+ (id)urlForKeychainWithScheme:(id)a0 login:(id)a1 host:(id)a2 path:(id)a3 port:(int)a4;
+ (id)oldURLForKeychainWithScheme:(id)a0 login:(id)a1 host:(id)a2 principalPath:(id)a3 port:(int)a4;

- (void)modifyOrCreateKeychainInformationsForURL:(id)a0 andPassword:(id)a1;
- (id)loadKeychainInformationsForURL:(id)a0;
- (id)loadOldKeychainForURL:(id)a0;
- (void)guessLoginPasswordForURL:(id)a0 login:(id *)a1 password:(id *)a2;
- (id)loadKeychainInformationsForURL:(id)a0 realm:(id)a1 login:(id *)a2;
- (struct __CFDictionary { } *)newDictionaryForURL:(id)a0 realm:(id)a1 backupDictionaries:(id *)a2;
- (void *)protocolForScheme:(id)a0;
- (struct __CFDictionary { } *)newDictionaryForGenericPasswordWithAccount:(id)a0 service:(id)a1;
- (struct __CFDictionary { } *)newDictionaryForInternetPasswordWithAccount:(id)a0 protocol:(void *)a1 server:(id)a2 port:(id)a3 path:(id)a4;
- (id)_computeOtherPossibleLookupPathsForPath:(id)a0;
- (struct __CFDictionary { } *)newDictionaryForURL:(id)a0 realm:(id)a1;
- (id)loadKeychainInformationsForURL:(id)a0 realm:(id)a1 login:(id *)a2 shouldDeleteEntry:(BOOL)a3;
- (id)loadKeychainInformationsForURL:(id)a0 realm:(id)a1;
- (void)guessLoginPasswordForThisURL:(id)a0 login:(id *)a1 password:(id *)a2;
- (void)modifyKeychainInformationsForQuery:(struct __CFDictionary { } *)a0 password:(id)a1;
- (void)saveKeychainInformationsForURL:(id)a0 realm:(id)a1 andPassword:(id)a2;
- (void)modifyOrCreateKeychainInformationsForURL:(id)a0 realm:(id)a1 andPassword:(id)a2;
- (void)deleteKeychainInformationsForURL:(id)a0;
- (id)guessPasswordForURL:(id)a0;
- (void)deleteKeychainItemForNSURLCredential:(id)a0 protectionSpace:(id)a1;

@end

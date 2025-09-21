@class NSURL;

@interface WBSPasswordManagerURL : NSObject

@property (class, readonly, nonatomic) NSURL *passwordManagerURL;
@property (class, readonly, nonatomic) NSURL *passwordManagerURLForRecentlyDeleted;
@property (class, readonly, nonatomic) NSURL *passwordManagerURLForGeneratedPasswords;
@property (class, readonly, nonatomic) NSURL *passwordManagerSecurityRecommendationsURL;

+ (id)passwordManagerURLWithDictionary:(id)a0;
+ (id)passwordManagerURLWithPrefsURL:(id)a0;
+ (id)valueForPasswordManagerURL:(id)a0 key:(id)a1;
+ (id)urlForDetailViewOfSavedAccount:(id)a0;
+ (id)_resourceSpecifierDictionaryForURL:(id)a0;
+ (char)_resourceSpecifierDictionaryIsPasswordManagerResourceSpecifierDictionary:(id)a0;
+ (char)_urlIsPasswordManagerURL:(id)a0 resourceSpecifierDictionary:(id)a1;
+ (char)boolForPasswordManagerResourceDictionary:(id)a0 key:(id)a1 defaultValue:(char)a2;
+ (id)dictionaryWithPasswordManagerURL:(id)a0;
+ (char)isOtpauthMigrationResourceDictionary:(id)a0;
+ (char)isOtpauthResourceDictionary:(id)a0;
+ (char)isPasswordManagerFamilySharingGroupSetupURL:(id)a0;
+ (char)isPasswordManagerGeneratedPasswordsResourceDictionary:(id)a0;
+ (char)isPasswordManagerPasskeysResourceDictionary:(id)a0;
+ (char)isPasswordManagerPasswordOptionsResourceDictionary:(id)a0;
+ (char)isPasswordManagerRecentlyDeletedResourceDictionary:(id)a0;
+ (char)isPasswordManagerSecurityRecommendationsResourceDictionary:(id)a0;
+ (char)isPasswordManagerVerificationCodesResourceDictionary:(id)a0;
+ (char)isPasswordManagerVerificationCodesURL:(id)a0;
+ (id)passwordManagerURLForGroupWithID:(id)a0;
+ (id)passwordManagerURLWithOtpauthURL:(id)a0;
+ (id)resourceSpecifierEncodedKey:(id)a0 value:(id)a1;
+ (char)urlIsPasswordManagerURL:(id)a0;
+ (id)valueForPasswordManagerResourceDictionary:(id)a0 key:(id)a1;

@end

@class NSDictionary, NSUserDefaults;

@interface MFLegacyAccountStorage : NSObject

@property (copy, nonatomic) NSDictionary *accountsPlistContents;
@property (readonly, nonatomic) NSUserDefaults *mailUserDefaults;

+ (id)log;
+ (id)legacyUIDForAccount:(id)a0;
+ (id)smtpIdentifierWithHostname:(id)a0 username:(id)a1;

- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)legacyAccountInfoForAccount:(id)a0;
- (id)legacyTildeAbbreviatedAccountDirectoryPathForAccount:(id)a0;

@end

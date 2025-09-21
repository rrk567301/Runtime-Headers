@class NSString, WFWhitelistSiteBuffer;

@interface WFWhitelistUserPreferences : NSObject

@property char filterEnabled;
@property char whitelistEnabled;
@property char alwaysAllowHTTPS;
@property (retain) NSString *username;
@property (readonly) WFWhitelistSiteBuffer *filterWhitelist;
@property (readonly) WFWhitelistSiteBuffer *filterBlacklist;
@property (readonly) WFWhitelistSiteBuffer *webWhitelist;

+ (id)_arrayByConvertingLinesInStringsAtPath:(id)a0;
+ (char)_isURLMetasite:(id)a0;
+ (id)_modificationDateForFileAtPath:(id)a0;
+ (id)_cachedWhitelistForPath:(id)a0 username:(id)a1 withAdditionalURLStrings:(id)a2;
+ (id)_metasiteDomainNamesArray;
+ (id)_sharedMetasiteDomainNamesDictionary;
+ (id)_sharedMetasiteExceptionsDomainNamesArray;
+ (id)defaultWhitelistForUser:(id)a0;
+ (id)defaultWhitelistForUser:(id)a0 withAdditionalURLStrings:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPreferences:(id)a0;
- (id)initWithAdditionalURLStrings:(id)a0;
- (id)initWithPreferences:(id)a0 withAdditionalURLStrings:(id)a1;
- (char)isURL:(id)a0 onList:(id)a1;
- (char)isURLAllowed:(id)a0;
- (char)isURLAllowed:(id)a0 reason:(id *)a1 shouldFilter:(char *)a2 foundOnList:(char *)a3;
- (id)pronounceOnPageURLString:(id)a0 shouldFilter:(char *)a1;

@end

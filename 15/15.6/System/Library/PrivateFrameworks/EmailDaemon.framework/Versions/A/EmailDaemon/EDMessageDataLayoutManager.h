@interface EDMessageDataLayoutManager : NSObject

+ (id)messageDataDirectoryURLForGlobalMessageID:(long long)a0 basePath:(id)a1 purgeable:(char)a2;
+ (id)messageDataDirectoryURLForGlobalMessageID:(long long)a0 rootMessageDataDirectory:(id)a1;
+ (id)rootMessageDataDirectoryForBasePath:(id)a0 purgeable:(char)a1;

@end

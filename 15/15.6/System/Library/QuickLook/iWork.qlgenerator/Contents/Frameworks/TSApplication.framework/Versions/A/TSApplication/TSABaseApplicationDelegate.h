@class TSAApplicationPropertiesProvider, TSADocumentRoot, TSAApplicationICloudPreferences;
@protocol TSADownloadDelegate;

@interface TSABaseApplicationDelegate : TSWPApplicationDelegate

@property (class, readonly, nonatomic) TSABaseApplicationDelegate *sharedDelegate;
@property (class, readonly, nonatomic) TSAApplicationPropertiesProvider *tsa_sharedPropertiesProvider;
@property (class, readonly, nonatomic) TSAApplicationICloudPreferences *tsa_sharedICloudPreferences;

@property (weak, nonatomic) TSADocumentRoot *documentRoot;
@property (readonly, nonatomic) double mimimumAspectRatioForPreviewImage;
@property (readonly, nonatomic) double maximumAspectRatioForPreviewImage;
@property (retain, nonatomic) id<TSADownloadDelegate> downloadDelegate;

+ (void)resetSharedConfigurations;
+ (void)registerDrawableInfoClassMappingForTests;

- (id)init;
- (void).cxx_destruct;
- (void)registerDefaults;
- (id)existingNestedDocumentPathForPath:(id)a0;
- (void)persistenceError:(id)a0;
- (void)createStringsProviders;
- (void)registerDrawableInfoClassMapping;
- (void)registerSOSClassTypeMappings;
- (char)hasApplicationBadgeCount;
- (Class)iCloudPreferencesProviderClass;
- (id)iCloudURLFromDocumentShareURLComponents:(id)a0;
- (char)openURL:(id)a0 displayAlertOnError:(char)a1;
- (void)setApplicationBadgeCount:(unsigned long long)a0 forCategory:(id)a1;

@end

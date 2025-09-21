@class NSBundle, NSString, NSArray, NSNumber;
@protocol PKPlugIn;

@interface IMBalloonApp : NSObject

@property (nonatomic) char canSendDataPayloads;
@property (nonatomic) char isLaunchProhibited;
@property (nonatomic) char showInSendMenu;
@property (nonatomic) char showInBrowser;
@property (nonatomic) char isEnabled;
@property (nonatomic) char shouldBalloonHideAppIcon;
@property (nonatomic) char shouldBreadcrumbHideAppIcon;
@property (nonatomic) char shouldHideAppSwitcher;
@property (nonatomic) char shouldHideAttributionInformation;
@property (retain, nonatomic) Class browserClass;
@property (retain, nonatomic) Class bubbleClass;
@property (retain, nonatomic) Class customTypingIndicatorLayerClass;
@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) Class entryClass;
@property (retain, nonatomic) NSBundle *appBundle;
@property (retain, nonatomic) NSBundle *pluginBundle;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSString *browserDisplayName;
@property (retain, nonatomic) NSString *browserShortDisplayName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<PKPlugIn> plugin;
@property (nonatomic) unsigned long long presentationContexts;
@property (nonatomic) unsigned long long stickerSharingLevel;
@property (nonatomic) char pluginLoaded;
@property (nonatomic) char isEnabledUnremovableApp;
@property (readonly, nonatomic) char isBetaPlugin;
@property (readonly, nonatomic) char isStickerPackOnly;
@property (readonly, nonatomic) char shouldForceIntoSendMenu;
@property (readonly, nonatomic) char shouldDelayViewControllerPresentation;
@property (readonly, nonatomic) double presentationDelay;
@property (readonly, nonatomic) char isPreDawnAndAppStoreStickerGenre;
@property (readonly, nonatomic) NSString *appStoreGenre;
@property (readonly, nonatomic) NSArray *appStoreSubgenres;
@property (readonly, nonatomic) char showableInBrowser;
@property (readonly, nonatomic) NSString *version;

+ (void)_setUnremovableDisabledApps:(id)a0;
+ (id)_unremovableDisabledApps;
+ (id)appWithPluginBundle:(id)a0;
+ (id)appWithPluginBundle:(id)a0 appBundle:(id)a1;
+ (id)appWithPluginBundle:(id)a0 extension:(id)a1;
+ (id)appWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;

- (void).cxx_destruct;
- (void)_loadBundle;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (char)linkedBeforeSDKVersion:(id)a0;
- (unsigned long long)presentationContextsForInfoPlistArray:(id)a0;

@end

@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSPreferencePane, NSBundle, NSImage, NSMutableArray;

@interface NSPrefPaneBundle : NSObject <NSSecureCoding> {
    NSString *_iconLabel;
    NSString *_shortName;
    NSString *_longName;
    NSString *_description;
    NSString *_identifier;
    NSString *_hardwareTestTool;
    NSString *_ioServiceToMatch;
    NSDictionary *_ioServiceAttributesToMatch;
    NSString *_searchGroupsPath;
    NSString *_bestLocale;
    NSArray *_localizations;
    NSString *_shortVersion;
    NSArray *_urlSchemes;
    NSMutableDictionary *_localizedNames;
    NSMutableDictionary *_localizedIconLabels;
    NSString *_remoteViewClass;
    NSImage *_icon;
    NSString *_iconName;
    BOOL _iconNameUsesAssetCatalog;
    NSImage *_largeIcon;
    NSBundle *_bundle;
    BOOL _visible;
    NSMutableArray *_searchAnchors;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL favorite;
@property BOOL overrideVisible;
@property (getter=isVisible) BOOL visible;
@property (getter=isEnabled) BOOL enabled;
@property (readonly) NSString *path;
@property (readonly) BOOL shouldAlwaysAllowOpenDocument;
@property (readonly) BOOL supportsAutoLayout;
@property (readonly) BOOL allowsXAppleSystemPreferencesURLScheme;
@property unsigned long long nameIconVariant;
@property (readonly) NSString *remoteViewClass;
@property (readonly) BOOL hasRemoteView;
@property (getter=isDevVersion) BOOL devVersion;
@property (readonly) NSPreferencePane *prefPaneObject;

+ (void)setUserInterfaceLayoutDirection:(long long)a0;
+ (BOOL)numberingSystemIsArabic;

- (id)description;
- (id)name;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)localizedNames;
- (id)objectSpecifier;
- (id)initWithPath:(id)a0;
- (id)bundle;
- (id)icon;
- (void)setVisible:(BOOL)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)iconName;
- (void)authorize:(id)a0;
- (id)shortName;
- (id)anchors;
- (id)iconLabel;
- (id)mainView;
- (id)largeIcon;
- (id)shortVersion;
- (id)longName;
- (void)reveal:(id)a0;
- (BOOL)isApple;
- (BOOL)_isSignedByAppleUsingStaticCodeRef:(const struct __SecCode **)a0;
- (id)bestLocaleForCurrentUser;
- (id)localizedIconLabels;
- (id)altNameIconTestTool;
- (id)_iconNameForKey:(id)a0;
- (id)_localeAwareIconNames:(id)a0;
- (void)instantiatePrefPaneObjectWithCompletionBlock:(id /* block */)a0;
- (id)searchGroupsPath;
- (id)hardwareTestTool;
- (id)ioServiceToMatch;
- (id)urlSchemes;
- (id)ioServiceAttributesToMatch;
- (BOOL)isSignedByApple;
- (BOOL)shouldAlwaysAllowOpenDocument;
- (BOOL)supportsAutoLayout;
- (BOOL)allowsXAppleSystemPreferencesURLScheme;
- (BOOL)hasRemoteView;
- (BOOL)wantsCache;
- (BOOL)isDisabledOnServer;
- (BOOL)instantiatePrefPaneObject;
- (void)_IOServiceDidMatch;

@end

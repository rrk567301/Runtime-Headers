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
    char _iconNameUsesAssetCatalog;
    NSImage *_largeIcon;
    NSBundle *_bundle;
    char _visible;
    NSMutableArray *_searchAnchors;
}

@property (class, readonly) char supportsSecureCoding;

@property char favorite;
@property char overrideVisible;
@property (getter=isVisible) char visible;
@property (getter=isEnabled) char enabled;
@property (readonly) NSString *path;
@property (readonly) char shouldAlwaysAllowOpenDocument;
@property (readonly) char supportsAutoLayout;
@property (readonly) char allowsXAppleSystemPreferencesURLScheme;
@property unsigned long long nameIconVariant;
@property (readonly) NSString *remoteViewClass;
@property (readonly) char hasRemoteView;
@property (getter=isDevVersion) char devVersion;
@property (readonly) NSPreferencePane *prefPaneObject;

+ (void)setUserInterfaceLayoutDirection:(long long)a0;
+ (char)numberingSystemIsArabic;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)bundle;
- (id)localizedNames;
- (id)objectSpecifier;
- (id)initWithPath:(id)a0;
- (id)icon;
- (void)setVisible:(char)a0;
- (char)hasEntitlement:(id)a0;
- (id)iconName;
- (void)authorize:(id)a0;
- (id)shortName;
- (id)anchors;
- (id)iconLabel;
- (id)mainView;
- (id)longName;
- (id)largeIcon;
- (id)shortVersion;
- (void)reveal:(id)a0;
- (char)isApple;
- (char)isSignedByApple;
- (void)_IOServiceDidMatch;
- (id)_iconNameForKey:(id)a0;
- (char)_isSignedByAppleUsingStaticCodeRef:(const struct __SecCode **)a0;
- (id)_localeAwareIconNames:(id)a0;
- (char)allowsXAppleSystemPreferencesURLScheme;
- (id)altNameIconTestTool;
- (id)bestLocaleForCurrentUser;
- (id)hardwareTestTool;
- (char)hasRemoteView;
- (char)instantiatePrefPaneObject;
- (void)instantiatePrefPaneObjectWithCompletionBlock:(id /* block */)a0;
- (id)ioServiceAttributesToMatch;
- (id)ioServiceToMatch;
- (char)isDisabledOnServer;
- (id)localizedIconLabels;
- (id)searchGroupsPath;
- (char)shouldAlwaysAllowOpenDocument;
- (char)supportsAutoLayout;
- (id)urlSchemes;
- (char)wantsCache;

@end

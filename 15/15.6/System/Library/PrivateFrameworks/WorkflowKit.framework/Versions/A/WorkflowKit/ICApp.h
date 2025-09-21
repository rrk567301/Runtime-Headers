@class NSString, NSDictionary, WFImage, NSArray, NSObject, INAppInfo;
@protocol OS_dispatch_queue;

@interface ICApp : NSObject

@property (retain, nonatomic) WFImage *icon;
@property (nonatomic) char checkedInstallStatus;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *definition;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSArray *allBundleIdentifiers;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedShortName;
@property (readonly, nonatomic) NSString *iTunesIdentifier;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) NSArray *schemes;
@property (readonly, nonatomic) NSArray *exportedFileTypes;
@property (readonly, nonatomic) NSArray *documentTypes;
@property (readonly, nonatomic) NSArray *documentActions;
@property (readonly, nonatomic) NSArray *metadata;
@property (readonly, nonatomic, getter=isRestricted) char restricted;
@property (readonly, nonatomic) INAppInfo *appInfo;
@property (readonly, nonatomic, getter=isInstalled) char installed;

+ (void)loadIconWithBundleIdentifier:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1;
- (void)openFile:(id)a0 completionHandler:(id /* block */)a1;
- (id)schemeNamed:(id)a0;
- (id)bundleIdentifiersByIdiom;
- (id)identifierFromDictionaryForCurrentIdiom:(id)a0;
- (char)isCurrentlyInstalled;
- (void)openFile:(id)a0 withAnnotation:(id)a1 completionHandler:(id /* block */)a2;
- (void)resetInstalledStatus;
- (void)updateInstalledStatus;

@end

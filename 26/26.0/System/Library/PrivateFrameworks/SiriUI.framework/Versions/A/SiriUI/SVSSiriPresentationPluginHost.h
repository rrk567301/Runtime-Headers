@class NSURL, NSMutableDictionary;

@interface SVSSiriPresentationPluginHost : NSObject

@property (readonly, nonatomic, getter=_URL) NSURL *URL;
@property (nonatomic, getter=_isLoaded, setter=_setLoaded:) BOOL loaded;
@property (readonly, nonatomic, getter=_bundleURLsByBundleIdentifier) NSMutableDictionary *bundleURLsByBundleIdentifier;

+ (id)_defaultURL;
+ (id)sharedSiriPresentationPluginHost;

- (void)_load;
- (void)_save;
- (id)_propertyListRepresentation;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_builtInPresentationWithIdentifier:(id)a0 delegate:(id)a1 dataSource:(id)a2;
- (id)_cachedURLForBundleWithIdentifier:(id)a0;
- (id)_classNameForBuiltInPresentationWithIdentifier:(id)a0;
- (void)_loadFromPropertyListRepresentation:(id)a0;
- (void)_rescanBundles;
- (id)_siriPresentationPluginBundleWithIdentifier:(id)a0;
- (id)presentationWithIdentifier:(id)a0 delegate:(id)a1 dataSource:(id)a2;

@end

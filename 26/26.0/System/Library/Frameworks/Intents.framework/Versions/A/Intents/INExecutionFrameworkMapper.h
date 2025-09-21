@class NSMutableDictionary;

@interface INExecutionFrameworkMapper : NSObject

@property (readonly, copy, nonatomic) NSMutableDictionary *_appToExtensionIdentifiers;
@property (readonly, nonatomic) BOOL _filled;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;

+ (void)initialize;

- (void)reset;
- (void)dealloc;
- (id)init;
- (void)_addExtensionBundleIdentifier:(id)a0 forAppBundleIdentifier:(id)a1;
- (id)extensionBundleIdentifiersForSystemAppIdentifier:(id)a0;
- (void)installedApplicationsDidChange:(id)a0;
- (id)launchableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;
- (void)loadSystemExtensionInformation;
- (id)appBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;
- (id)displayableAppBundleIdentifierForSystemExtensionBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end

@class NSArray, NSObject;
@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;

- (id)collectAnnotatedGroupWithIdentifier:(id)a0 parameters:(id)a1;
- (id)extensionManager;
- (id)_combineParametersWithParameters:(id)a0 extension:(id)a1 identifier:(id)a2;
- (BOOL)isDiagnosticExtensionAvailable;
- (void)cleanupItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (id)init;
- (void)loadExtensionTextDataInExtension:(id)a0 localization:(id)a1;
- (id)collectItemsWithIdentifier:(id)a0 parameters:(id)a1;
- (id)extensionForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)prepareItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)prepareItemsWithDeferredExtensionInfo:(id)a0;
- (id)availableDiagnosticExtensions;

@end

@class NSArray, NSObject;
@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;

- (void)cleanupItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (id)extensionForIdentifier:(id)a0;
- (id)init;
- (void)loadExtensionTextDataInExtension:(id)a0 localization:(id)a1;
- (id)extensionManager;
- (id)collectAnnotatedGroupWithIdentifier:(id)a0 parameters:(id)a1;
- (id)availableDiagnosticExtensions;
- (BOOL)isDiagnosticExtensionAvailable;
- (void)prepareItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (id)_combineParametersWithParameters:(id)a0 extension:(id)a1 identifier:(id)a2;
- (id)collectItemsWithIdentifier:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;
- (void)prepareItemsWithDeferredExtensionInfo:(id)a0;

@end

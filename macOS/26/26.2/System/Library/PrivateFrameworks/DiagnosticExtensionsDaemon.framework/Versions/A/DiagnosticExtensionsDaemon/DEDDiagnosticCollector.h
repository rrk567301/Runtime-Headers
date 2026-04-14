@class NSArray, NSObject;
@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;

- (id)collectItemsWithIdentifier:(id)a0 parameters:(id)a1;
- (void)loadExtensionTextDataInExtension:(id)a0 localization:(id)a1;
- (void)prepareItemsWithDeferredExtensionInfo:(id)a0;
- (id)extensionForIdentifier:(id)a0;
- (id)_combineParametersWithParameters:(id)a0 extension:(id)a1 identifier:(id)a2;
- (void).cxx_destruct;
- (id)availableDiagnosticExtensions;
- (id)extensionManager;
- (void)cleanupItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (void)prepareItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (BOOL)isDiagnosticExtensionAvailable;
- (id)collectAnnotatedGroupWithIdentifier:(id)a0 parameters:(id)a1;
- (id)init;

@end

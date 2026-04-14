@class NSString, NSArray, NSSet, NSError, NSObject, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NCRemotePlugInManager : NSObject <LSApplicationWorkspaceObserverProtocol> {
    id _searchToken;
    BOOL _shouldBeSearching;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_source> *_processingTimer;
    NSSet *_pendingPlugIns;
    NSDictionary *_containerToIdentifier;
    NSDictionary *_knownExtensionsByID;
    NSDictionary *_remotePluginsByIdentifier;
}

@property (readonly, nonatomic) NSString *extensionType;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) NSError *lastSearchError;
@property (readonly, nonatomic) NSArray *allPlugInIdentifiers;
@property (copy, nonatomic) NSString *requiredEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_pluginClassForType:(id)a0;
+ (void)findPluginWithPath:(id)a0 ofType:(id)a1 block:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initForExtensionType:(id)a0;
- (void)_actuallyStartSearching;
- (void)_processPluginChanges:(id)a0 currentContainerToIdentifier:(id)a1;
- (BOOL)_valideExtension:(id)a0;
- (Class)_pluginClass;
- (void)_updateContainerToIdentifierTable:(id)a0;
- (void)startSearching;
- (void)stopSearching;
- (id)pluginIdentifierForIdentifier:(id)a0;
- (id)identifierForPluginIdentifier:(id)a0;

@end

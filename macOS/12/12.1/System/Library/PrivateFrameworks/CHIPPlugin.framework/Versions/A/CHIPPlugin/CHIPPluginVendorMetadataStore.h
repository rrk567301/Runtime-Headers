@class NSString, UARPController, NSMutableArray, CHIPPluginVendorMetadata;
@protocol CHIPPluginFileManager;

@interface CHIPPluginVendorMetadataStore : HMFObject <HMFLogging, UARPControllerDelegateProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) CHIPPluginVendorMetadataStore *defaultStore;

@property (readonly) UARPController *uarpController;
@property (readonly) id<CHIPPluginFileManager> fileManager;
@property (readonly) NSMutableArray *metadataRefreshCompletionBlocks;
@property (readonly, copy) CHIPPluginVendorMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (void)assetAvailablityUpdateForAccessoryID:(id)a0 assetID:(id)a1;
- (id)logIdentifier;
- (id)initWithUARPController:(id)a0 fileManager:(id)a1;
- (id)metadataFileURL;
- (void)fetchLatestMetadataWithCompletion:(id /* block */)a0;
- (void)_saveMetadata:(id)a0;
- (void)_enqueueMetadataRefreshCompletionBlock:(id /* block */)a0;
- (id /* block */)_dequeueMetadataRefreshCompletionBlock;

@end

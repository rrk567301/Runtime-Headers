@class NSURL, NSString, CHIPPluginVendorMetadata;
@protocol CHIPPluginFileManager;

@interface CHIPPluginVendorMetadataStore : HMFObject <HMFLogging, UARPControllerDelegateProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<CHIPPluginFileManager> fileManager;
@property (readonly, copy) CHIPPluginVendorMetadata *metadata;
@property (readonly, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (void)assetAvailablityUpdateForAccessoryID:(id)a0 assetID:(id)a1;
- (void)supportedAccessories:(id)a0 forProductGroup:(id)a1;
- (void)fetchCloudMetadata;
- (id)initWithFileURL:(id)a0 fileManager:(id)a1;
- (id)staticMetadataFileURL;
- (id)staticMetadata;
- (void)_saveMetadata:(id)a0;
- (void)_addVendorInfoToMetadata:(id)a0 accessories:(id)a1;
- (void)_addProductInfoToMetadata:(id)a0 accessories:(id)a1;

@end

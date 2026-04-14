@class NSString, UARPController, NSMutableSet, HMMTRVendorMetadata, NSURL;
@protocol HMMTRFileManager;

@interface HMMTRVendorMetadataFileStore : HMFObject <UARPControllerDelegateProtocol, HMFLogging, HMMTRVendorMetadataStore> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) UARPController *uarpController;
@property (retain) NSMutableSet *batchedAccessories;
@property (readonly) id<HMMTRFileManager> fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HMMTRVendorMetadata *metadata;
@property (readonly, copy) NSURL *fileURL;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (void)supportedAccessories:(id)a0 forProductGroup:(id)a1 isComplete:(BOOL)a2;
- (void)fetchCloudMetadata;
- (void)_addProductInfoToMetadata:(id)a0 accessories:(id)a1;
- (void)_addVendorInfoToMetadata:(id)a0 accessories:(id)a1;
- (void)_processSupportedAccessories:(id)a0;
- (void)_saveMetadata:(id)a0;
- (id)initWithFileURL:(id)a0 uarpController:(id)a1 fileManager:(id)a2;
- (id)staticMetadata;
- (id)staticMetadataFileURL;

@end

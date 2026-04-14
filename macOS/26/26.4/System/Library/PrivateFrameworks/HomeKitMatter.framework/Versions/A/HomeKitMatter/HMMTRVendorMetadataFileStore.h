@class HMFPreferences, UARPController, NSURL;
@protocol HMMTRFileManager;

@interface HMMTRVendorMetadataFileStore : HMFObject <HMMTRVendorMetadataStore> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _uarpLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _injectedDataLock;
}

@property (retain, nonatomic) UARPController *uarpController;
@property (readonly) id<HMMTRFileManager> fileManager;
@property (readonly) HMFPreferences *preferences;
@property (readonly, copy) NSURL *fileURL;

+ (id)logCategory;

- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)configureMetaDataService;
- (id)retrieveVendorMetadataForVendorID:(id)a0 productID:(id)a1;
- (id)_convertUARPMetadataToVendor:(id)a0 uarpProductInfoMetadata:(id)a1 vendorID:(id)a2 productID:(id)a3;
- (id)_createUARPProductMetadata:(id)a0 productID:(id)a1;
- (id)_createUARPVendorMetadata:(id)a0 vendorID:(id)a1;
- (id)_generateRecordName:(id)a0 productID:(id)a1;
- (BOOL)_isDataInjectionActive;
- (id)_retrieveVendorMetadataFromInjectedData:(id)a0 productID:(id)a1 metadata:(id)a2;
- (id)_retrieveVendorMetadataUsingNewAPIs:(id)a0 productID:(id)a1;
- (id)loadTestInjectedMetadata;

@end

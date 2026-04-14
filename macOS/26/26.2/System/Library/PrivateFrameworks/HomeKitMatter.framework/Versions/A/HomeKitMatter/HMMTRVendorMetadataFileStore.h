@class NSCache, NSString, HMFTimer, HMFPreferences, HMMTRVendorMetadata, NSURL, NSMutableSet, NSObject, UARPController;
@protocol OS_dispatch_queue, HMMTRVendorMetadataStoreDelegate, HMMTRFileManager;

@interface HMMTRVendorMetadataFileStore : HMFObject <UARPControllerDelegateProtocol, HMFLogging, HMFTimerDelegate, HMMTRVendorMetadataStore> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) UARPController *uarpController;
@property (retain) NSMutableSet *batchedAccessories;
@property (readonly) id<HMMTRFileManager> fileManager;
@property (readonly) HMFPreferences *preferences;
@property (readonly, nonatomic) NSCache *vendorMetadataCache;
@property BOOL dclCacheAvailable;
@property (nonatomic) BOOL fetchInProgress;
@property unsigned long long retryCount;
@property (readonly) NSObject<OS_dispatch_queue> *retryQueue;
@property (retain) HMFTimer *retryTimer;
@property double firstFailureTime;
@property (nonatomic) double retryIntervalOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMMTRVendorMetadataStoreDelegate> delegate;
@property (readonly, copy) HMMTRVendorMetadata *metadata;
@property (readonly, copy) NSURL *fileURL;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (void)supportedAccessories:(id)a0 forProductGroup:(id)a1 isComplete:(BOOL)a2;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (id)overrideMetadata;
- (void)fetchCloudMetadata;
- (id)retrieveVendorMetadataForVendorID:(id)a0 productID:(id)a1;
- (void)_addProductInfoToMetadata:(id)a0 accessories:(id)a1;
- (void)_addVendorInfoToMetadata:(id)a0 accessories:(id)a1;
- (void)_handleCloudMetadataFetchFailure;
- (void)_handleCloudMetadataFetchSuccess;
- (void)_prepopulateCacheForKnownAccessories:(id)a0;
- (void)_processSupportedAccessories:(id)a0;
- (id)_retrieveVendorMetadataForVendorID:(id)a0 productID:(id)a1 metadata:(id)a2;
- (void)_saveMetadata:(id)a0;
- (void)attemptCloudMetadataFetch;
- (void)cancelCloudMetadataFetch;
- (id)initWithFileURL:(id)a0 uarpController:(id)a1 fileManager:(id)a2 preferences:(id)a3;
- (id)staticMetadata;
- (id)staticMetadataFileURL;

@end

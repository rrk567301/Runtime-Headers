@class NSURL, NSString, HMMTRVendorMetadata;
@protocol HMMTRFileManager;

@interface HMMTRVendorMetadataStore : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<HMMTRFileManager> fileManager;
@property (readonly, copy) HMMTRVendorMetadata *metadata;
@property (readonly, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (void)fetchCloudMetadata;
- (void)_saveMetadata:(id)a0;
- (id)initWithFileURL:(id)a0 fileManager:(id)a1;
- (id)staticMetadata;
- (id)staticMetadataFileURL;

@end

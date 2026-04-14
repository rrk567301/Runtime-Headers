@class NSURL, NSArray, NSString;
@protocol HMMTRFileManager;

@interface HMMTRAttestationDataStore : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<HMMTRFileManager> fileManager;
@property (readonly) NSURL *fileURL;
@property (readonly, copy) NSArray *paaCertificates;
@property (readonly, copy) NSArray *cdCertificates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (void)fetchCloudAttestationData;
- (id)convertPEMtoDERforCertificate:(id)a0;
- (id)initWithFileURL:(id)a0 fileManager:(id)a1;
- (void)saveWithPaaCertificates:(id)a0 cdCertificates:(id)a1;
- (id)staticAttestationData;
- (id)staticAttestationDataFileURL;

@end

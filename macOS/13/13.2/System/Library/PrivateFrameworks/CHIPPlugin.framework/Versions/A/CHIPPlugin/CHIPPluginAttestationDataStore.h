@class NSURL, NSArray, NSString;
@protocol CHIPPluginFileManager;

@interface CHIPPluginAttestationDataStore : HMFObject <HMFLogging, UARPControllerDelegateProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) id<CHIPPluginFileManager> fileManager;
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
- (void)attestationCertificates:(id)a0 forSubjectKeyIdentifier:(id)a1;
- (BOOL)sendMessageToAccessory:(id)a0 uarpMsg:(id)a1 error:(id *)a2;
- (void)assetAvailablityUpdateForAccessoryID:(id)a0 assetID:(id)a1;
- (void)fetchCloudAttestationData;
- (id)initWithFileURL:(id)a0 fileManager:(id)a1;
- (id)staticAttestationDataFileURL;
- (id)staticAttestationData;
- (void)saveWithPaaCertificates:(id)a0 cdCertificates:(id)a1;
- (id)convertPEMtoDERforCertificate:(id)a0;

@end

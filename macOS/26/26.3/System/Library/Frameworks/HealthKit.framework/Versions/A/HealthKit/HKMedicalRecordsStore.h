@class NSString, HKTaskServerProxyProvider;

@interface HKMedicalRecordsStore : NSObject <_HKXPCExportable, HKMedicalRecordsStoreClient> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)fetchMedicalRecordsForClinicalRecords:(id)a0 completion:(id /* block */)a1;

@end

@class NSString, HKTaskServerProxyProvider;

@interface HKHealthRecordsAccountInfoStore : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)init;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)determineMedicalRecordsAccountInfoStatusWithCompletion:(id /* block */)a0;

@end

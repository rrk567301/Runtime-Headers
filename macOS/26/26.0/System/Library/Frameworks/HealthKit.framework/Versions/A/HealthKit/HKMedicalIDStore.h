@class NSString, HKTaskServerProxyProvider, _HKMedicalIDData;

@interface HKMedicalIDStore : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
    HKTaskServerProxyProvider *_setupStatusProxyProvider;
    _HKMedicalIDData *_lastFetchedMedicalIDData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) long long medicalIDSetUpStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setupStatusTaskIdentifier;
+ (id)taskIdentifier;
+ (id)setupStatusClientInterface;
+ (id)serverInterface;
+ (id)setupStatusServerInterface;
+ (id)clientInterface;

- (void)updateMedicalIDData:(id)a0 completion:(id /* block */)a1;
- (void)fetchMedicalIDDataWithCompletion:(id /* block */)a0;
- (void)fetchMedicalIDEmergencyContactsWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (void)setLastFetchedMedicalIDData:(id)a0;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (void)removeEmergencyContact:(id)a0 completion:(id /* block */)a1;
- (void)fetchMedicalIDClinicalContactsWithCompletion:(id /* block */)a0;
- (id)lastFetchedMedicalIDData;
- (id)remoteInterface;
- (void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id /* block */)a0;
- (void)deleteMedicalIDDataWithCompletion:(id /* block */)a0;
- (void)addEmergencyContact:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

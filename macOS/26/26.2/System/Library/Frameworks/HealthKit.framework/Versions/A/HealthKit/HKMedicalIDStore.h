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

+ (id)taskIdentifier;
+ (id)setupStatusTaskIdentifier;
+ (id)serverInterface;
+ (id)clientInterface;
+ (id)setupStatusClientInterface;
+ (id)setupStatusServerInterface;

- (void)fetchMedicalIDEmergencyContactsWithCompletion:(id /* block */)a0;
- (void)deleteMedicalIDDataWithCompletion:(id /* block */)a0;
- (void)updateMedicalIDData:(id)a0 completion:(id /* block */)a1;
- (void)connectionInvalidated;
- (void)fetchMedicalIDDataWithCompletion:(id /* block */)a0;
- (void)fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setLastFetchedMedicalIDData:(id)a0;
- (id)lastFetchedMedicalIDData;
- (void)removeEmergencyContact:(id)a0 completion:(id /* block */)a1;
- (void)fetchMedicalIDClinicalContactsWithCompletion:(id /* block */)a0;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)addEmergencyContact:(id)a0 completion:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0;

@end

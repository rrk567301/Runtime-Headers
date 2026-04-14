@class HDContributorReference, NSString, HDProfile, HDDatabaseValueCache, NSLock, NSNumber;

@interface HDDataProvenanceManager : NSObject <HDDiagnosticObject> {
    HDProfile *_profile;
    NSString *_localSourceVersion;
    NSLock *_propertyLock;
    NSNumber *_propertyLock_localSourceID;
    NSNumber *_propertyLock_localDeviceID;
    NSNumber *_propertyLock_deviceNoneID;
    HDContributorReference *_propertyLock_noneContributorReference;
    HDContributorReference *_propertyLock_primaryUserContributorReference;
    _Atomic BOOL _defaultsLoaded;
    HDDatabaseValueCache *_persistentIDsByProvenanceKey;
    HDDatabaseValueCache *_originProvenanceByPersistentID;
    NSString *_localSystemBuild;
    NSString *_localProductType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (id)provenanceEntityForProvenance:(id)a0 error:(id *)a1;
- (id)localDataProvenanceForSourceEntity:(id)a0 version:(id)a1 deviceEntity:(id)a2 timezone:(id)a3 OSVersion:(struct { long long x0; long long x1; long long x2; })a4;
- (id)originProvenanceForPersistentID:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)defaultLocalDataProvenanceWithDeviceEntity:(id)a0;
- (id)defaultLocalDataProvenance;
- (id)localDataProvenanceForSourceEntity:(id)a0 version:(id)a1 deviceEntity:(id)a2;
- (id)deviceIDsForSourceIDs:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)provenanceEntityForProvenance:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end

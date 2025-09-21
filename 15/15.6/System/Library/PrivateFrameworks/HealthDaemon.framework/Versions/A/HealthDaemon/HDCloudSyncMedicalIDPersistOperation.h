@class _HKMedicalIDData;

@interface HDCloudSyncMedicalIDPersistOperation : HDCloudSyncSynchronousOperation

@property (retain, nonatomic) _HKMedicalIDData *medicalIDDataToPersist;

- (void).cxx_destruct;
- (char)performWithError:(id *)a0;

@end

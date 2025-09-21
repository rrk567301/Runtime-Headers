@class _HKMedicalIDData;

@interface HDCloudSyncMedicalIDMergeOperation : HDCloudSyncSynchronousOperation

@property (retain, nonatomic) _HKMedicalIDData *localMedicalIDData;
@property (retain, nonatomic) _HKMedicalIDData *cloudMedicalIDData;
@property (readonly, nonatomic) _HKMedicalIDData *mergedMedicalIDData;

- (void).cxx_destruct;
- (char)performWithError:(id *)a0;

@end

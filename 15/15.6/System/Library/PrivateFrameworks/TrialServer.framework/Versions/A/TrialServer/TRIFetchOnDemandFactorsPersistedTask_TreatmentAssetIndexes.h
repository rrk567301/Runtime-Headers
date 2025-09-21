@class NSString, TRIPBUInt32Array;

@interface TRIFetchOnDemandFactorsPersistedTask_TreatmentAssetIndexes : TRIPBMessage

@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (retain, nonatomic) TRIPBUInt32Array *indexArray;
@property (readonly, nonatomic) unsigned long long indexArray_Count;

+ (id)descriptor;

@end

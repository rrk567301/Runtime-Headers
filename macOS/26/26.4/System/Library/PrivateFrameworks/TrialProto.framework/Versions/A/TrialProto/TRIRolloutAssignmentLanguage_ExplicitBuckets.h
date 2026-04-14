@class TRIPBUInt32Array;

@interface TRIRolloutAssignmentLanguage_ExplicitBuckets : TRIPBMessage

@property (retain, nonatomic) TRIPBUInt32Array *bucketArray;
@property (readonly, nonatomic) unsigned long long bucketArray_Count;

+ (id)descriptor;

@end

@class TRIRolloutAssignmentLanguage_ExplicitBuckets, NSMutableArray;

@interface TRIRolloutAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *assignmentArray;
@property (readonly, nonatomic) unsigned long long assignmentArray_Count;
@property (nonatomic) int allocationUnitType;
@property (nonatomic) BOOL hasAllocationUnitType;
@property (readonly, nonatomic) int bucketingOneOfCase;
@property (nonatomic) unsigned int numBuckets;
@property (retain, nonatomic) TRIRolloutAssignmentLanguage_ExplicitBuckets *explicitBuckets;

+ (id)descriptor;

@end

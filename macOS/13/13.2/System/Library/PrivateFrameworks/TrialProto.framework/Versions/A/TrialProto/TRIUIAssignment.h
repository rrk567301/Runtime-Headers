@class NSString, TRIUIAssignment_ExplicitBuckets;

@interface TRIUIAssignment : TRIPBMessage

@property (readonly, nonatomic) int bucketingOneOfCase;
@property (nonatomic) unsigned int numBuckets;
@property (retain, nonatomic) TRIUIAssignment_ExplicitBuckets *explicitBuckets;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;

+ (id)descriptor;

@end

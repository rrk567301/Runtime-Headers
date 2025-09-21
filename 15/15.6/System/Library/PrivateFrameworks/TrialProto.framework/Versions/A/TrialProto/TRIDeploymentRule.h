@class NSString, NSMutableArray;

@interface TRIDeploymentRule : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasName;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) char hasTreatmentId;
@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) unsigned long long predicateArray_Count;

+ (id)descriptor;

@end

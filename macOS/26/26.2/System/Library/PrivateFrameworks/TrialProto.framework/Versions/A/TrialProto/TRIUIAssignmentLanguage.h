@class TRIPredicateExpression, NSMutableArray;

@interface TRIUIAssignmentLanguage : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *predicateArray;
@property (readonly, nonatomic) unsigned long long predicateArray_Count;
@property (retain, nonatomic) NSMutableArray *assignmentArray;
@property (readonly, nonatomic) unsigned long long assignmentArray_Count;
@property (nonatomic) BOOL preservePopulationDistribution;
@property (nonatomic) BOOL hasPreservePopulationDistribution;
@property (nonatomic) int allocationUnitType;
@property (nonatomic) BOOL hasAllocationUnitType;
@property (retain, nonatomic) TRIPredicateExpression *predicateExpression;
@property (nonatomic) BOOL hasPredicateExpression;

+ (id)descriptor;

@end

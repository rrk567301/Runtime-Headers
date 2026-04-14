@class NSDictionary, HKWorkoutTrainingLoadCollection;

@interface HKWorkoutTrainingLoadCollectionQueryResults : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *collectionByActivityType;
@property (readonly, copy) HKWorkoutTrainingLoadCollection *totalTrainingLoadCollection;

- (void).cxx_destruct;
- (id)activityTypes;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTotalTrainingLoadCollection:(id)a0 collectionByActivityType:(id)a1;
- (id)trainingLoadCollectionForActivityType:(unsigned long long)a0;

@end

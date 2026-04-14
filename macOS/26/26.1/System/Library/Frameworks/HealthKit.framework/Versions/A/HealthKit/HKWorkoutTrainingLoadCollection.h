@class NSMutableArray;

@interface HKWorkoutTrainingLoadCollection : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSMutableArray *trainingLoads;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addTrainingLoad:(id)a0;
- (id)initWithTotalTrainingLoads:(id)a0;
- (id)trainingLoad;
- (id)trainingLoadForDate:(id)a0;

@end

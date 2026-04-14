@class NSUUID, NSString, RTPredictedContextRequestMO, NSDate;

@interface RTPredictedContextMO : NSManagedObject

@property (nonatomic) short contextType;
@property (nonatomic) long long locationOfInterestType;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (copy, nonatomic) NSUUID *loiIdentifier;
@property (copy, nonatomic) NSDate *predictionEndDate;
@property (nonatomic) double predictionEndDateConfidenceInterval;
@property (nonatomic) long long predictionSourceMask;
@property (copy, nonatomic) NSDate *predictionStartDate;
@property (nonatomic) double predictionStartDateConfidenceInterval;
@property (nonatomic) double probability;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (copy, nonatomic) NSDate *submissionDate;
@property (nonatomic) short transportMode;
@property (nonatomic) short workoutActivityType;
@property (nonatomic) long long workoutLocationType;
@property (retain, nonatomic) RTPredictedContextRequestMO *predictedContextRequest;

+ (id)fetchRequest;
+ (id)managedObjectWithPredictedContext:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithPredictedContext:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end

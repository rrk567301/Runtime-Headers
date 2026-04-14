@class NSString, NSSet, IRReplayEventMO, NSDate;

@interface IRMiLoLSLPredictionMO : NSManagedObject

@property (copy, nonatomic) NSString *predictionId;
@property (retain, nonatomic) IRReplayEventMO *replayEvent;
@property (retain, nonatomic) NSSet *scores;
@property (retain, nonatomic) NSDate *predictionTime;
@property (nonatomic) BOOL isPredictionValid;
@property (nonatomic) BOOL isMapValid;
@property (nonatomic) BOOL isMotionDetected;

+ (id)fetchRequest;
+ (id)miLoLSLPredictionMOWithMiLoLSLPredictionDO:(id)a0 replayEvent:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfMiLoLSLPredictionMO:(id)a0 withMiLoLSLPredictionDO:(id)a1 inManagedObjectContext:(id)a2;

- (id)convert;

@end

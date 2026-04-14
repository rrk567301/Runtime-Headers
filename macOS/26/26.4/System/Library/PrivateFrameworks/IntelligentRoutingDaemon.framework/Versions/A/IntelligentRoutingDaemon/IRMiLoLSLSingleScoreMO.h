@class NSString, IRMiLoLSLPredictionMO, NSDate;

@interface IRMiLoLSLSingleScoreMO : NSManagedObject

@property (copy, nonatomic) NSString *eventId;
@property (nonatomic) double score;
@property (copy, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) IRMiLoLSLPredictionMO *prediction;

+ (id)fetchRequest;
+ (id)miLoLSLSingleScoreMOWithMiLoLSLSingleScoreDO:(id)a0 miloPrediction:(id)a1 inManagedObjectContext:(id)a2;
+ (void)setPropertiesOfMiLoLSLSingleScoreMO:(id)a0 IRMiLoLSLSingleScoreDO:(id)a1;

- (id)convert;

@end

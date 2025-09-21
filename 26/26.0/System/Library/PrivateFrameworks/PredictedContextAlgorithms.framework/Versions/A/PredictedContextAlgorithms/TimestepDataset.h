@class NSArray, NSMutableArray;

@interface TimestepDataset : NSObject

@property (retain) NSMutableArray *loiAtTimestepArray;
@property (retain) NSMutableArray *locationAtTimestepArray;
@property (retain) NSArray *oneHotEncodedLois;
@property (retain) NSMutableArray *ordinalLoiLabels;
@property (retain) NSMutableArray *timestepCFAbsArray;
@property (retain) NSMutableArray *dayOfWeekArray;
@property (retain) NSMutableArray *dayOfWeekSinArray;
@property (retain) NSMutableArray *dayOfWeekCosArray;
@property (retain) NSMutableArray *timeOfDaySinArray;
@property (retain) NSMutableArray *timeOfDayCosArray;

- (void).cxx_destruct;
- (id)getFeatureMatrixWithUnknownLoiLabel:(id)a0;

@end

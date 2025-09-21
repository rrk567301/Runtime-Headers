@class RTLocation;

@interface RTLearnedLocation : NSObject

@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) unsigned long long dataPointCount;
@property (readonly, nonatomic) double confidence;

+ (id)removeLearnedVisitsPinned:(id)a0;
+ (id)removeOutlierLearnedLocationsWithLargeHorizontalUncertainty:(id)a0;
+ (double)confidenceFromDataPointCount:(unsigned long long)a0 highConfidenceThreshold:(double)a1;
+ (id)removeLearnedVisitsInvalid:(id)a0;
+ (id)shiftLocation:(id)a0 shifter:(id)a1;
+ (id)removeLearnedVisitsWithShortestDwell:(id)a0;

- (id)initWithLearnedLocations:(id)a0 type:(unsigned long long)a1;
- (id)aggregateLearnedLocations:(id)a0 updateAltitude:(BOOL)a1;
- (id)init;
- (void)calculateAltitude:(double *)a0 verticalUncertainty:(double *)a1 learnedLocations:(id)a2;
- (id)initWithLocation:(id)a0 dataPointCount:(unsigned long long)a1 type:(unsigned long long)a2;
- (id)description;
- (id)initWithLocation:(id)a0 dataPointCount:(unsigned long long)a1 confidence:(double)a2;
- (id)initWithLocationOfInterest:(id)a0;
- (id)initWithLearnedVisits:(id)a0;
- (id)initWithMapItem:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithChinaShiftedLearnedLocations:(id)a0 type:(unsigned long long)a1;

@end

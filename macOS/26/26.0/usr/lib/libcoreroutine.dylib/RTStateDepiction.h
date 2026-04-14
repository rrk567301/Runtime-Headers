@class NSString, RTStateDepictionOneState, RTMapItem, RTStateModelLocation, NSDate;
@protocol GEOMapItem;

@interface RTStateDepiction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTStateDepictionOneState *clusterState;
@property (nonatomic) long long numOfDataPts;
@property (nonatomic) unsigned long long mapItemSource;
@property (retain, nonatomic) id<GEOMapItem> geoMapItem;
@property (retain, nonatomic) RTStateModelLocation *location;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long typeSource;
@property (retain, nonatomic) RTMapItem *mapItem;
@property (retain, nonatomic) NSDate *geocodeDate;
@property (copy, nonatomic) NSString *customLabel;

+ (double)quantizeTimeIntervalSinceReferenceDate:(double)a0;
+ (long long)maximumNumberOfDataPoints;

- (id)initWithLocation:(id)a0 type:(long long)a1 typeSource:(unsigned long long)a2 customLabel:(id)a3 mapItem:(id)a4;
- (id)getEarliestLatestEntry;
- (id)lastEntyExit;
- (void)encodeWithCoder:(id)a0;
- (void)removeAllVisitsExceptMostRecent;
- (double)_calculateStandardDeviationForDates:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_performErrorCorrection;
- (BOOL)cleanState:(double)a0;
- (double)calculateStandardDeviationWithOptions:(id)a0 error:(id *)a1;
- (id)_excludeEntryExitOutlierDates:(id)a0 options:(id)a1;
- (BOOL)exemptFromPurge;
- (id)init;
- (void)addOneVisitsFromStateDepiction:(id)a0;
- (id)_referenceAdjustEntryExitDates:(id)a0 options:(id)a1;
- (double)getLastVisit;
- (id)_filterEntryExitData:(id)a0 options:(id)a1;
- (id)description;
- (id)getAggStateStat;
- (void)_performIntegrityCheck;
- (double)getAggTimeScaleFactor:(double)a0 predictionWindow:(double)a1;
- (void)incrementNumOfDataPtsByInteger:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)showState;
- (void)submitEntry:(double)a0 exit:(double)a1;
- (id)getGetWeeklyStats:(double)a0 numOfWeeks:(int)a1 uniqueID:(id)a2;
- (unsigned long long)getNumOfVisitsOverall;
- (id)getAllOneVisits;
- (id)getRecentVisits:(double)a0;
- (void).cxx_destruct;
- (void)removeEntry:(double)a0 exit:(double)a1;
- (id)getPredState:(double)a0 predictionWindow:(double)a1 numOfWeeks:(int)a2 uniqueID:(id)a3;

@end

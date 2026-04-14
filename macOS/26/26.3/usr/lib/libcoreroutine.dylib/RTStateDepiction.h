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

- (id)_excludeEntryExitOutlierDates:(id)a0 options:(id)a1;
- (BOOL)exemptFromPurge;
- (id)initWithLocation:(id)a0 type:(long long)a1 typeSource:(unsigned long long)a2 customLabel:(id)a3 mapItem:(id)a4;
- (unsigned long long)getNumOfVisitsOverall;
- (id)getAllOneVisits;
- (id)description;
- (void)removeAllVisitsExceptMostRecent;
- (id)init;
- (id)_filterEntryExitData:(id)a0 options:(id)a1;
- (double)getAggTimeScaleFactor:(double)a0 predictionWindow:(double)a1;
- (void)incrementNumOfDataPtsByInteger:(long long)a0;
- (id)getRecentVisits:(double)a0;
- (void)removeEntry:(double)a0 exit:(double)a1;
- (id)getPredState:(double)a0 predictionWindow:(double)a1 numOfWeeks:(int)a2 uniqueID:(id)a3;
- (double)getLastVisit;
- (void)submitEntry:(double)a0 exit:(double)a1;
- (id)_referenceAdjustEntryExitDates:(id)a0 options:(id)a1;
- (double)_calculateStandardDeviationForDates:(id)a0 options:(id)a1 error:(id *)a2;
- (id)getEarliestLatestEntry;
- (void).cxx_destruct;
- (void)_performIntegrityCheck;
- (id)initWithCoder:(id)a0;
- (void)addOneVisitsFromStateDepiction:(id)a0;
- (id)getGetWeeklyStats:(double)a0 numOfWeeks:(int)a1 uniqueID:(id)a2;
- (id)lastEntyExit;
- (id)getAggStateStat;
- (BOOL)cleanState:(double)a0;
- (void)_performErrorCorrection;
- (void)encodeWithCoder:(id)a0;
- (double)calculateStandardDeviationWithOptions:(id)a0 error:(id *)a1;
- (void)showState;

@end

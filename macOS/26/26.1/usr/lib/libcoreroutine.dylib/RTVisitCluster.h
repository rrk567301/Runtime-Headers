@class RTVisit, RTVisitLocationPoints;

@interface RTVisitCluster : NSObject

@property (readonly, nonatomic) RTVisitLocationPoints *points;
@property (readonly, nonatomic) RTVisit *visit;

- (BOOL)isExitDateBeforeDate:(id)a0;
- (id)initWithPoints:(id)a0;
- (BOOL)isPartialAndExitDateIsEqualToDate:(id)a0;
- (id)description;
- (BOOL)isDateInside:(id)a0;
- (BOOL)isCompleteAndExitDateIsEqualToDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithPoints:(id)a0 visit:(id)a1;
- (id)init;

@end

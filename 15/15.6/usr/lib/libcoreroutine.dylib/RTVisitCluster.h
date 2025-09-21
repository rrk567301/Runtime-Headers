@class RTVisit, RTVisitLocationPoints;

@interface RTVisitCluster : NSObject

@property (readonly, nonatomic) RTVisitLocationPoints *points;
@property (readonly, nonatomic) RTVisit *visit;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPoints:(id)a0;
- (id)initWithPoints:(id)a0 visit:(id)a1;
- (char)isCompleteAndExitDateIsEqualToDate:(id)a0;
- (char)isDateInside:(id)a0;
- (char)isExitDateBeforeDate:(id)a0;
- (char)isPartialAndExitDateIsEqualToDate:(id)a0;

@end

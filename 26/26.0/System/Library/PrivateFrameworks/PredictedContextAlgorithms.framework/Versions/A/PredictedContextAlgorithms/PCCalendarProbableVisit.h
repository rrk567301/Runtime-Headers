@class PCPVisit;

@interface PCCalendarProbableVisit : NSObject

@property (retain, nonatomic) PCPVisit *visit;
@property (nonatomic) double evidence;
@property (nonatomic) double probability;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 withEvidence:(double)a1;

@end

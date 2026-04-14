@class PCPVisit;

@interface PCCalendarAssociatedVisit : NSObject

@property (retain, nonatomic) PCPVisit *visit;
@property (nonatomic) double fractionOfCalDuration;

- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 atFraction:(double)a1;

@end

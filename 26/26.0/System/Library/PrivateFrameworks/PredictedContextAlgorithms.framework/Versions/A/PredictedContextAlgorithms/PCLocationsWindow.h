@class NSArray;

@interface PCLocationsWindow : NSObject

@property (readonly, nonatomic) NSArray *sorted;

- (void).cxx_destruct;
- (id)fixAtOrAfter:(double)a0;
- (id)fixAtOrBefore:(double)a0;
- (id)initWithRawHistory:(id)a0 maxUncertainty:(double)a1;

@end

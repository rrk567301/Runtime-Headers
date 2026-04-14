@class NSMutableArray, NSDate;

@interface RTVisitFeedBuffer : NSObject {
    id /* block */ _comparator;
}

@property (retain, nonatomic) NSMutableArray *locations;
@property (retain, nonatomic) NSDate *lastMaturedLocationDate;
@property (readonly, nonatomic) unsigned long long numLocations;
@property (readonly, nonatomic) double minWaitInterval;

- (void)addLocations:(id)a0;
- (id)initWithMinWaitInterval:(double)a0;
- (id)init;
- (id)maturedLocations;
- (void).cxx_destruct;

@end

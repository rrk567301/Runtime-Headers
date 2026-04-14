@class NSDictionary, NSMutableDictionary;

@interface HMMEphemeralStatisticsContainer : NSObject {
    NSMutableDictionary *_statistics;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSDictionary *statistics;

- (id)init;
- (void).cxx_destruct;
- (BOOL)active;
- (void)addValue:(long long)a0 toStatistics:(id)a1;
- (id)statistics:(id)a0;

@end

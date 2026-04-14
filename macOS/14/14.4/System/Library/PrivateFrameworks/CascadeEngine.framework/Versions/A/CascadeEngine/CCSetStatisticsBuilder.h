@class CCSet;

@interface CCSetStatisticsBuilder : NSObject {
    CCSet *_set;
    unsigned long long _min;
    unsigned long long _max;
    unsigned long long _sum;
    unsigned long long _sumQ;
}

@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)initWithSet:(id)a0;
- (void)addChange:(id)a0;
- (id)build;

@end

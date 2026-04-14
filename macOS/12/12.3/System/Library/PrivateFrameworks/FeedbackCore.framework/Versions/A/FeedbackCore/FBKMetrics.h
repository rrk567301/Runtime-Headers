@class NSDate, NSMutableDictionary;

@interface FBKMetrics : NSObject

@property (class, readonly, nonatomic) FBKMetrics *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *events;
@property (retain, nonatomic) NSDate *reloadStartDate;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)didStartEvent:(unsigned long long)a0;
- (void)didEndEvent:(unsigned long long)a0;
- (void)didStartReload;

@end

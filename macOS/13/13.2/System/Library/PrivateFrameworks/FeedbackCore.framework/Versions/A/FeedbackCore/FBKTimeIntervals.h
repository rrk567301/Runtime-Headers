@class NSMutableDictionary;

@interface FBKTimeIntervals : NSObject

@property (class, readonly, nonatomic) FBKTimeIntervals *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *events;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)didStartEvent:(unsigned long long)a0;
- (void)willStartEvent:(unsigned long long)a0 context:(id)a1;
- (id)didEndEvent:(unsigned long long)a0;
- (id)didEndEvent:(unsigned long long)a0 context:(id)a1;
- (id)keyForEvent:(unsigned long long)a0 context:(id)a1;

@end

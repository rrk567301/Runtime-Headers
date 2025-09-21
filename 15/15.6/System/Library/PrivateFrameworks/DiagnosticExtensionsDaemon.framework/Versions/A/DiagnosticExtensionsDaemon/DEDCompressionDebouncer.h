@interface DEDCompressionDebouncer : NSObject

@property (nonatomic) unsigned long long lastSentTotalBytes;
@property (nonatomic) unsigned long long lastSentCompressedBytes;
@property (nonatomic) unsigned long long lastKnownTotalBytes;
@property (nonatomic) unsigned long long lastKnownCompressedBytes;
@property (nonatomic) double lastTriggerTime;
@property (nonatomic) char finished;
@property (copy, nonatomic) id /* block */ trigger;
@property (nonatomic) double interval;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithTrigger:(id /* block */)a0 interval:(double)a1;
- (void)sendTriggerIfStateChanged;
- (void)sendTriggerIfTimeElapsed;

@end

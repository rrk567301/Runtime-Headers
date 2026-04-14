@class IAXPCObject;

@interface IASDailyGarbageCollectionStateMachineAnalyzer : IASDailyGarbageCollectionAnalyzer

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) IAXPCObject *lastConsumedAsyncSignal;

+ (id)stringForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)stringForState:(unsigned long long)a0;
- (BOOL)asynchronousSignalIsConsistent:(id)a0;

@end

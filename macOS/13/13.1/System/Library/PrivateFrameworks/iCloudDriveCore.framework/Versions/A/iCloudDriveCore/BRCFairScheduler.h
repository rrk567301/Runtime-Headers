@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_workloop;

@interface BRCFairScheduler : NSObject {
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSString *_name;
    unsigned long long _maxRegistedSourceBit;
    unsigned long long _lastVisitedBit;
    NSMutableDictionary *_sourceForBitIndex;
    BOOL _resumed;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;

- (void)dealloc;
- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (void)cancel;
- (void)suspend;
- (void)schedule;
- (void)addSource:(id)a0;
- (id)initWithWorkloop:(id)a0 name:(id)a1;
- (void)unregisterSources;
- (id)sourceForBitIndex:(unsigned long long)a0;
- (void)signalSourceForBitIndex:(unsigned long long)a0;

@end

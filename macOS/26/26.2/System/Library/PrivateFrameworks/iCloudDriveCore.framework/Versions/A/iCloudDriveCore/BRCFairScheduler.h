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

- (void)cancel;
- (id)sourceForBitIndex:(unsigned long long)a0;
- (void)suspend;
- (void)close;
- (void)resume;
- (void).cxx_destruct;
- (void)signalSourceForBitIndex:(unsigned long long)a0;
- (void)schedule;
- (id)initWithWorkloop:(id)a0 name:(id)a1;
- (void)addSource:(id)a0;
- (void)unregisterSources;
- (void)dealloc;

@end

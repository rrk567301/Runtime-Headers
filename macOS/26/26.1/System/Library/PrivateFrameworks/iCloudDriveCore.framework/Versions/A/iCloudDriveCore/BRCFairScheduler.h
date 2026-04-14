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

- (id)sourceForBitIndex:(unsigned long long)a0;
- (void)cancel;
- (void)addSource:(id)a0;
- (void)signalSourceForBitIndex:(unsigned long long)a0;
- (void)schedule;
- (void)resume;
- (void)suspend;
- (void)close;
- (void)unregisterSources;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithWorkloop:(id)a0 name:(id)a1;

@end

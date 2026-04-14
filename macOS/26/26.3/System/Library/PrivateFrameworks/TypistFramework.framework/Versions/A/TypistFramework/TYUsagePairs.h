@class NSMutableArray, RCPSyntheticEventStream;

@interface TYUsagePairs : NSObject

@property (retain, nonatomic) NSMutableArray *_usagePages;
@property (retain, nonatomic) NSMutableArray *_usages;
@property (retain, nonatomic) NSMutableArray *_usagePairs;
@property (retain, nonatomic) RCPSyntheticEventStream *eventStream;

- (id)init;
- (void).cxx_destruct;
- (id)usages;
- (id)usagePages;
- (void)addUsagePairs:(id)a0;
- (id)usagePairs;

@end

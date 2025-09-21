@class NSMutableArray;

@interface FPAggregateProgress : NSProgress {
    NSMutableArray *_childProgresses;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)startReportingProgress;

@end

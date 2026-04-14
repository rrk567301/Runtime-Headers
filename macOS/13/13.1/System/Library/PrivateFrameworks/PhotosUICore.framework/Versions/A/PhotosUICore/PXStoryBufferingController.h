@class PXStoryModel, NSIndexSet, NSMutableIndexSet, NSDictionary;

@interface PXStoryBufferingController : PXStoryController {
    unsigned long long _activatedTime;
    struct { double previousDuration; unsigned long long currentStartTime; } _overallBufferingDuration;
    struct { double previousDuration; unsigned long long currentStartTime; } _lastNoncriticalBufferingDurationStore;
    struct { double previousDuration; unsigned long long currentStartTime; } _lastCriticalBufferingDurationStore;
    struct { double x0; unsigned long long x1; } *_bufferingDurationsPerReason;
}

@property (weak, nonatomic) PXStoryModel *model;
@property (nonatomic) BOOL isBuffering;
@property (copy, nonatomic) id /* block */ onBufferingEnd;
@property (nonatomic) long long overallReadinessStatus;
@property (readonly, nonatomic) NSMutableIndexSet *bufferingReasonsStore;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) double lastNoncriticalBufferingDuration;
@property (readonly, nonatomic) double lastCriticalBufferingDuration;
@property (readonly, nonatomic) NSIndexSet *bufferingReasons;
@property (readonly, nonatomic) double totalBufferingTimeInterval;
@property (readonly, nonatomic) NSDictionary *totalBufferingTimeIntervalsPerReason;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)a0;
- (id)initWithModel:(id)a0;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_updateOverallReadinessStatus;
- (void)_updateModelProperties;
- (void)_invalidateOverallReadinessStatus;
- (void)_invalidateModelProperties;
- (void)_accountForReason:(long long)a0 status:(long long)a1;

@end

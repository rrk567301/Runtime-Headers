@protocol TSCH3DSharegroupDelayCheckerParent;

@interface TSCH3DSharegroupDelayChecker : NSObject {
    id<TSCH3DSharegroupDelayCheckerParent> _parent;
}

@property (nonatomic) BOOL condition;

- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)p_checkCondition;
- (void)p_scheduleCheckConditionOnMainThread;
- (void)p_cancelCheckCondition;
- (void)scheduleCheckCondition;
- (void)invalidateCondition;

@end

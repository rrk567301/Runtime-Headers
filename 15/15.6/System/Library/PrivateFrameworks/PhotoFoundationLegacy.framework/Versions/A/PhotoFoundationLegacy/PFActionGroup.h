@class NSArray, NSString, PFAction;

@interface PFActionGroup : PFAction <PFActionNotificationsReceiver> {
    unsigned long long _completedWorkUnits;
    unsigned long long _myTotalWorkUnits;
    unsigned long long _averageWorkUnits;
    double _progressPercent;
}

@property (readonly) NSArray *actions;
@property (readonly) char interruptSupported;
@property (readonly, nonatomic) PFAction *currentAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionFromActionsArray:(id)a0;

- (void).cxx_destruct;
- (char)canUndo;
- (void)interrupt;
- (double)progressPercent;
- (unsigned long long)performAction;
- (unsigned long long)performRedo;
- (unsigned long long)performUndo;
- (void)setupProgress;
- (unsigned long long)_myWorkUnitsForAction:(id)a0;
- (void)_usingAction:(id)a0 performBlock:(id /* block */)a1;
- (void)actionReportedProgress:(id)a0;
- (id)initWithActionList:(id)a0;
- (id)initWithActionList:(id)a0 interruptible:(char)a1;

@end

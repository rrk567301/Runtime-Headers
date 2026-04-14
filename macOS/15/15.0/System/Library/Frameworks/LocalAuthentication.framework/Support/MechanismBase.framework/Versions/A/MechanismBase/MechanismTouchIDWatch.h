@class NSArray, NSString, NSDictionary, MechanismBase;

@interface MechanismTouchIDWatch : MechanismBase <MechanismComposite> {
    MechanismBase *_touchId;
    MechanismBase *_watch;
    NSDictionary *_previousResult;
}

@property (readonly, nonatomic) unsigned long long k;
@property (readonly, nonatomic) unsigned long long n;
@property (readonly, nonatomic, getter=isAND) BOOL AND;
@property (readonly, nonatomic, getter=isOR) BOOL OR;
@property (readonly, nonatomic) NSArray *submechanisms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_runTouchIDWithHints:(id)a0 eventsDelegate:(id)a1;
- (void)_runWatchWithHints:(id)a0 eventsDelegate:(id)a1;
- (void)_terminateAllMechanismsWithResult:(id)a0 error:(id)a1;
- (id)additionalControllerInternalInfoForPolicy:(long long)a0;
- (id)availabilityEventsForPurpose:(long long)a0;
- (id)backgroundMechanismForEventProcessing:(id)a0;
- (id)bestEffortAvailableMechanismForRequest:(id)a0 error:(id *)a1;
- (id)findMechanismWithEventIdentifier:(long long)a0;
- (void)finishRunWithResult:(id)a0 error:(id)a1;
- (id)initWithSubmechanisms:(id)a0 isAND:(BOOL)a1 request:(id)a2;
- (id)mechanismTreeDescription;
- (BOOL)pause:(BOOL)a0 forEvent:(long long)a1 error:(id *)a2;
- (long long)remoteViewControllerForEventProcessing:(id)a0;
- (BOOL)requiresUiWithEventProcessing:(id)a0;
- (void)restartWithEventIdentifier:(long long)a0 lastAttempt:(BOOL)a1;
- (void)runWithHints:(id)a0 eventsDelegate:(id)a1 reply:(id /* block */)a2;
- (void)willFinish;

@end

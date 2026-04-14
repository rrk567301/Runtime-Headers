@class NSArray, NSString, NSMutableArray;

@interface MechanismKofN : MechanismBase <MechanismComposite> {
    NSMutableArray *_runningMechanisms;
    BOOL _finishing;
}

@property (readonly, nonatomic, getter=isSerial) BOOL serial;
@property (readonly, nonatomic) unsigned long long k;
@property (readonly, nonatomic) unsigned long long n;
@property (readonly, nonatomic, getter=isAND) BOOL AND;
@property (readonly, nonatomic, getter=isOR) BOOL OR;
@property (readonly, nonatomic) NSArray *submechanisms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mechanismWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3;
+ (id)mechanismWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3 preserveStandaloneReorganizers:(BOOL)a4;

- (void).cxx_destruct;
- (void)setParent:(id)a0;
- (void)_runSubmechanismAtIndex:(long long)a0 hints:(id)a1 eventsDelegate:(id)a2 succeeded:(long long)a3 failed:(long long)a4 results:(id)a5 reply:(id /* block */)a6;
- (id)additionalControllerInternalInfoForPolicy:(long long)a0;
- (id)availabilityEventsForPurpose:(long long)a0;
- (id)bestEffortAvailableMechanismForRequest:(id)a0 error:(id *)a1;
- (id)cachedExternalizationDelegate;
- (BOOL)canRecoverFromError:(id)a0 request:(id)a1;
- (id)descriptionFlags;
- (id)findMechanismWithEventIdentifier:(long long)a0;
- (void)finishRunWithResult:(id)a0 error:(id)a1;
- (id)initWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3;
- (id)mechanismPruningMechanismsWithEventIdentifier:(long long)a0;
- (id)mechanismTreeDescription;
- (BOOL)pause:(BOOL)a0 forEvent:(long long)a1 error:(id *)a2;
- (BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)a0;
- (BOOL)requiresUiWithEventProcessing:(id)a0;
- (void)runWithHints:(id)a0 eventsDelegate:(id)a1 reply:(id /* block */)a2;

@end

@class RBProcessState, RBSAssertionIdentifier, NSString, NSArray, RBAssertionIntransientState, NSSet, RBAssertionTransientState, NSDictionary, RBProcess, RBSProcessAssertionInfo, RBInheritanceCollection;
@protocol RBConcreteTargeting;

@interface RBAssertion : NSObject <RBStateCapturing> {
    RBProcess *_targetProcessForAbstract;
    id _targetState;
    RBAssertionTransientState *_transientState;
    NSSet *_originatorInheritances;
    NSDictionary *_lastConditions;
    RBSProcessAssertionInfo *_assertionInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned char _invalidationReason;
    char _suspended;
    char _active;
}

@property (readonly, copy, nonatomic) id<RBConcreteTargeting> target;
@property (readonly, nonatomic) RBProcess *originator;
@property (readonly, copy, nonatomic) RBSAssertionIdentifier *identifier;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, copy, nonatomic) RBInheritanceCollection *inheritances;
@property (readonly, copy, nonatomic) RBAssertionIntransientState *intransientState;
@property (readonly, copy, nonatomic) RBProcessState *processState;
@property (readonly, nonatomic) unsigned long long startPolicy;
@property (readonly, nonatomic) unsigned long long endPolicy;
@property (readonly, nonatomic, getter=isPersistent) char persistent;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isSuspended) char suspended;
@property (readonly, nonatomic, getter=isValid) char invalid;
@property (nonatomic, getter=isLaunchAssertion) char launchAssertion;
@property (readonly, nonatomic) char suspendsOnOriginatorSuspension;
@property (readonly, nonatomic) char invalidatesSynchronously;
@property (readonly, nonatomic) double invalidationDuration;
@property (readonly, nonatomic) double warningDuration;
@property (readonly, nonatomic) double creationTime;
@property (readonly, nonatomic) unsigned long long legacyReason;
@property (readonly, nonatomic) unsigned long long runningReason;
@property (readonly, nonatomic) char definesRelativeStartTime;
@property (readonly, nonatomic) char terminateTargetOnOriginatorExit;
@property (readonly, nonatomic) char hasHereditaryGrant;
@property (readonly, nonatomic) char hasDomainAttribute;
@property (readonly, nonatomic) NSSet *sourceEnvironments;
@property (nonatomic) unsigned char invalidationReason;
@property (retain, nonatomic) id plugInHoldToken;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assertionWithDescriptor:(id)a0 target:(id)a1 originator:(id)a2 context:(id)a3 creationTime:(double)a4;
+ (id)assertionWithDescriptor:(id)a0 target:(id)a1 originator:(id)a2 context:(id)a3;
+ (id)assertionWithIdentifier:(id)a0 target:(id)a1 explanation:(id)a2 attributes:(id)a3 originator:(id)a4 context:(id)a5;

- (void).cxx_destruct;
- (void)resume;
- (void)activate;
- (void)suspend;
- (void)deactivate;
- (id)captureState;
- (void)applyToAssertionTransientState:(id)a0 withAttributeContext:(id)a1;
- (void)applyToProcessState:(id)a0 withAttributeContext:(id)a1;
- (void)applyToSystemState:(id)a0 withAttributeContext:(id)a1;
- (id)lock_targetProcessForAbstract;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)a0;
- (char)resolveStateWithContext:(id)a0;
- (void)setTargetProcessForAbstract:(id)a0;
- (id)terminationContextForTargetProcess:(id)a0 originatorProcessIsActive:(char)a1;
- (id)updateProcessStateWithAttributeContext:(id)a0;

@end

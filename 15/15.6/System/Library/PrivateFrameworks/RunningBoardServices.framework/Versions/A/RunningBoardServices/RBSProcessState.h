@class NSSet, NSString, NSMutableDictionary, NSObject, RBSProcessHandle;
@protocol OS_xpc_object;

@interface RBSProcessState : NSObject <RBSXPCSecureCoding, NSCopying> {
    unsigned long long _codedValues;
    NSMutableDictionary *_codedStateCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) unsigned char taskState;
@property (nonatomic) unsigned char debugState;
@property (nonatomic) unsigned char terminationResistance;
@property (copy, nonatomic) NSSet *endowmentNamespaces;
@property (copy, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSSet *legacyAssertions;
@property (copy, nonatomic) NSSet *primitiveAssertions;
@property (copy, nonatomic) NSSet *endowmentInfos;
@property (readonly, nonatomic, getter=isEmptyState) char emptyState;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *codedState;
@property (nonatomic) unsigned short appNapState;
@property (readonly, nonatomic) RBSProcessHandle *process;
@property (readonly, nonatomic, getter=isRunning) char running;
@property (readonly, nonatomic, getter=isDebugging) char debugging;
@property (readonly, nonatomic, getter=isPreventedFromLaunching) char preventedFromLaunching;
@property (readonly, copy, nonatomic) NSSet *assertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setActiveStateDescriptor:(id)a0;
+ (id)stateWithProcess:(id)a0;
+ (id)statesForPredicate:(id)a0 withDescriptor:(id)a1 error:(out id *)a2;
+ (id)statesForPredicate:(id)a0 withDescriptor:(id)a1 service:(id)a2 error:(out id *)a3;
+ (char)supportsRBSXPCSecureCoding;
+ (id)untrackedRunningStateforProcess:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isAppNapEnabled;
- (char)isAppNapLowPriorityCPUPrevented;
- (unsigned char)appNapPreventTimerThrottleTier;
- (void)encodeWithPreviousState:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (char)isApNapBackgroundSocketPrevented;
- (char)isAppNapActive;
- (char)isAppNapDiskThrottlePrevented;
- (char)isAppNapSuppressedCPUPrevented;
- (char)isDifferentFromState:(id)a0 significantly:(out char *)a1;
- (char)isTaskSuppressed;

@end

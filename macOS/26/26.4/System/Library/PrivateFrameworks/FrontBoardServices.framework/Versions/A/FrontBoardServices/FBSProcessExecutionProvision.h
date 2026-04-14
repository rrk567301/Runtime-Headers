@class NSError, NSString, NSObject;
@protocol OS_dispatch_queue, FBSProcessInternal, FBSProcessExecutionProvisionDelegate;

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying> {
    BOOL _activated;
    NSObject<OS_dispatch_queue> *_delegateCalloutQueue;
}

@property (weak, nonatomic) id<FBSProcessExecutionProvisionDelegate> delegate;
@property (readonly, weak, nonatomic) id<FBSProcessInternal> process;
@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring;
@property (readonly, nonatomic, getter=isViolated) BOOL violated;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)_stopMonitoring;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_prepareForReuse;
- (void)_updateProgress;
- (void)monitorProcess:(id)a0;
- (void)_beginMonitoring;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_performDelegateCallout:(id /* block */)a0;
- (void)_noteViolatedWithError:(id)a0;
- (id)init;
- (void)updateProgress;
- (void)stopMonitoring;
- (BOOL)isResourceProvision;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;

@end

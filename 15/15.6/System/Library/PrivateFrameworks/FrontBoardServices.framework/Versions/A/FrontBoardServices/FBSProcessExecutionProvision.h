@class NSError, NSString, NSObject;
@protocol OS_dispatch_queue, FBSProcessInternal, FBSProcessExecutionProvisionDelegate;

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying> {
    char _activated;
    NSObject<OS_dispatch_queue> *_delegateCalloutQueue;
}

@property (weak, nonatomic) id<FBSProcessExecutionProvisionDelegate> delegate;
@property (readonly, weak, nonatomic) id<FBSProcessInternal> process;
@property (readonly, nonatomic, getter=isMonitoring) char monitoring;
@property (readonly, nonatomic, getter=isViolated) char violated;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_prepareForReuse;
- (void)stopMonitoring;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)_stopMonitoring;
- (void)updateProgress;
- (void)_beginMonitoring;
- (void)_updateProgress;
- (void)monitorProcess:(id)a0;
- (void)_noteViolatedWithError:(id)a0;
- (void)_performDelegateCallout:(id /* block */)a0;
- (char)isResourceProvision;

@end

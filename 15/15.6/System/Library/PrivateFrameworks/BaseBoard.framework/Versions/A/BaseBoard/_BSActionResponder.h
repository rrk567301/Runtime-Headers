@class NSString, NSArray, BSActionResponse, NSObject, BSMachPortSendOnceRight;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_mach;

@interface _BSActionResponder : NSObject <BSDebugDescriptionProviding> {
    NSObject<OS_dispatch_queue> *_originator_responseQueue;
    id /* block */ _lock_originator_responseHandler;
    NSObject<OS_dispatch_source> *_lock_originator_timeoutSource;
    NSObject<OS_dispatch_source> *_lock_originator_replySource;
    BSMachPortSendOnceRight *_reply;
    NSObject<OS_dispatch_mach> *_lock_nullificationMach;
    NSString *_lock_action_identifier;
    NSArray *_lock_inactivationCallStack;
    BSActionResponse *_lock_response;
    NSObject<OS_dispatch_queue> *_lock_nullificationQueue;
    id /* block */ _lock_nullificationHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _isOriginator;
    char _isOriginatorNull;
    char _lock_invalidateSendsNotPossible;
    char _lock_action_encoded;
    char _lock_action_sent;
    char _lock_action_invalidated;
    char _lock_annulled;
    char _lock_nullificationHandlerIsLegacy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

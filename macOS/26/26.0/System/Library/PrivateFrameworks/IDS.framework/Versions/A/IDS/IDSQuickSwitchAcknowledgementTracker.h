@class NSMutableSet;

@interface IDSQuickSwitchAcknowledgementTracker : NSObject {
    NSMutableSet *_delegateIdentifiers;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _delegateIdentifiersMutex;
}

@property (readonly, nonatomic) BOOL isAwaitingAcknowledgement;

- (id)identifierForServiceDelegate:(id)a0;
- (void)dealloc;
- (void)_accessDelegateIdentifiersInCriticalSectionWithBlock:(id /* block */)a0;
- (void)stopAwaitingAcknowledgementFromServiceDelegateWithIdentifier:(id)a0;
- (id)init;
- (void)stopAwaitingAcknowledgementFromAllServiceDelegates;
- (id)awaitAcknowledgementFromServiceDelegate:(id)a0;
- (void).cxx_destruct;

@end

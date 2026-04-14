@class NSSet;

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct NotificationReceiver *__ptr_; } _notificationReceiver;
    NSSet *_ignoredPeerIdentifiers;
}

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (id).cxx_construct;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)addIgnoredClientProcess:(id)a0;

@end

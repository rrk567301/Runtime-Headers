@class NSSet;

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct { struct NotificationReceiver *__ptr_; } ; } _notificationReceiver;
    NSSet *_ignoredPeerIdentifiers;
}

- (void)didAddFirstObserver;
- (void)addIgnoredClientProcess:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithName:(id)a0;
- (void)didRemoveLastObserver;
- (id)init;

@end

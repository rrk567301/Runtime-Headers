@class NSSet;

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct { struct NotificationReceiver *__ptr_; } ; } _notificationReceiver;
    NSSet *_ignoredPeerIdentifiers;
}

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (void)addIgnoredClientProcess:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (id).cxx_construct;

@end

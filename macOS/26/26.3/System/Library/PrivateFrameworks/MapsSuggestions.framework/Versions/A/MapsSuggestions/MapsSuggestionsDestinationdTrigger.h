@class NSSet;

@interface MapsSuggestionsDestinationdTrigger : MapsSuggestionsBaseTrigger {
    struct unique_ptr<MSg::NotificationReceiver, std::default_delete<MSg::NotificationReceiver>> { struct { struct NotificationReceiver *__ptr_; } ; } _notificationReceiver;
    NSSet *_ignoredPeerIdentifiers;
}

- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (id)init;
- (id)initWithName:(id)a0;
- (void)addIgnoredClientProcess:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

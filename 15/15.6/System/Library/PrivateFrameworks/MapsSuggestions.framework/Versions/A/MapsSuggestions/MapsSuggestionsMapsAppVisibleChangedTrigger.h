@class NSString, RBSProcessMonitor;

@interface MapsSuggestionsMapsAppVisibleChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition> {
    RBSProcessMonitor *_processMonitor;
    char _isVisible;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)isTrue;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)objectForJSON;

@end

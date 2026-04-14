@class NSString;
@protocol MapsSuggestionsFirstUnlockProtocol;

@interface MapsSuggestionsFirstUnlockTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsTriggerObserver, MapsSuggestionsCondition> {
    id<MapsSuggestionsFirstUnlockProtocol> _firstUnlock;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForJSON;
- (void)didRemoveLastObserver;
- (void)triggerFired:(id)a0;
- (void)didAddFirstObserver;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isTrue;
- (id)initWithFirstLock:(id)a0;

@end

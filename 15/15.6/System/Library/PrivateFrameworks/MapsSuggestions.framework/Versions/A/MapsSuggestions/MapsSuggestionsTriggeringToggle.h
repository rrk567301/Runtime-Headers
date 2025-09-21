@class NSString;

@interface MapsSuggestionsTriggeringToggle : MapsSuggestionsBaseTrigger <MapsSuggestionsTrigger, MapsSuggestionsCondition> {
    unsigned long long _behavior;
    char _state;
    unsigned long long _timesUpdated;
}

@property (nonatomic) char state;
@property (readonly, nonatomic) unsigned long long timesUpdated;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isTrue;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)initWithName:(id)a0 startState:(char)a1;
- (id)initWithName:(id)a0 startState:(char)a1 behavior:(unsigned long long)a2;
- (id)objectForJSON;

@end

@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsCompositeTriggeringCondition : MapsSuggestionsTriggeringToggle <MapsSuggestionsTriggerObserver> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    NSArray *_triggers;
    NSArray *_conditions;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didRemoveLastObserver;
- (void)addCondition:(id)a0;
- (void)addTrigger:(id)a0;
- (id)objectForJSON;
- (void)didAddFirstObserver;
- (void)triggerFired:(id)a0;
- (id).cxx_construct;
- (void)addConditions:(id)a0;
- (void)dealloc;
- (void)addTriggers:(id)a0;
- (void).cxx_destruct;
- (BOOL)isTrue;
- (id)initWithName:(id)a0 startState:(BOOL)a1;
- (id)initWithName:(id)a0 startState:(BOOL)a1 behavior:(unsigned long long)a2;
- (id)initWithName:(id)a0 startState:(BOOL)a1 behavior:(unsigned long long)a2 triggers:(id)a3 conditions:(id)a4;
- (id)initWithName:(id)a0 startState:(BOOL)a1 triggers:(id)a2 conditions:(id)a3;

@end

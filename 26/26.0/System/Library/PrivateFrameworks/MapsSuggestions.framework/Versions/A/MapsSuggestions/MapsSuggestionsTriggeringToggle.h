@class NSString;

@interface MapsSuggestionsTriggeringToggle : MapsSuggestionsBaseTrigger <MapsSuggestionsTrigger, MapsSuggestionsCondition> {
    unsigned long long _behavior;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _state;
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { _Atomic unsigned int __a_value; } __a_; } _timesUpdated;
}

@property (nonatomic) BOOL state;
@property (readonly, nonatomic) unsigned long long timesUpdated;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (BOOL)isTrue;
- (id)objectForJSON;
- (id)initWithName:(id)a0 startState:(BOOL)a1;
- (id)initWithName:(id)a0 startState:(BOOL)a1 behavior:(unsigned long long)a2;

@end

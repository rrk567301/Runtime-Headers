@class NSString;

@interface MapsSuggestionsNetworkReachableTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsCondition>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (BOOL)isTrue;
- (id)objectForJSON;
- (void)_reachabilityChanged;

@end

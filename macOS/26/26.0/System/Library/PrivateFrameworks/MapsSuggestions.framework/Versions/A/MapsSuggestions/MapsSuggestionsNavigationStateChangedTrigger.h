@class NSString, GEONavigationListener;

@interface MapsSuggestionsNavigationStateChangedTrigger : MapsSuggestionsBaseTrigger <GEONavigationListenerDelegate, MapsSuggestionsCondition> {
    unsigned long long _navigationState;
    GEONavigationListener *_navigationListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;

- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (id)init;
- (void)navigationListener:(id)a0 didChangeNavigationState:(unsigned long long)a1 transportType:(int)a2;
- (BOOL)isTrue;
- (void).cxx_destruct;

@end

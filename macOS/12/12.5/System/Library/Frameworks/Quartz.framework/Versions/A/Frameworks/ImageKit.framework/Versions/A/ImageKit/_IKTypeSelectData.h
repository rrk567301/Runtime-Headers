@class NSString, NSView;

@interface _IKTypeSelectData : NSObject {
    NSString *_currentSearch;
    long long _currentSearchIndex;
    long long _initialSearchIndex;
    long long _totalIndexes;
    NSView *_view;
}

- (void)dealloc;
- (void)cancelScheduledEndOfSearch;
- (void)clearView;
- (void)_typeSelectEndCurrentSearch;
- (id)currentSearch;
- (void)scheduleEndOfSearch;
- (id)nextSearchStringForNewValue:(id)a0;
- (void)setCurrentSearch:(id)a0;
- (long long)initialSearchIndex;
- (long long)currentSearchIndex;
- (void)setCurrentSearchIndex:(long long)a0;
- (id)initWithInitialSearchIndex:(long long)a0 totalIndexes:(long long)a1 forView:(id)a2;
- (void)_resetCurrentSearchIndex;

@end

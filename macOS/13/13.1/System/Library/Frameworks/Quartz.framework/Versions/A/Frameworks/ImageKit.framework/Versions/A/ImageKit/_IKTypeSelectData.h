@class NSString, NSView;

@interface _IKTypeSelectData : NSObject {
    NSString *_currentSearch;
    long long _currentSearchIndex;
    long long _initialSearchIndex;
    long long _totalIndexes;
    NSView *_view;
}

- (void)dealloc;
- (void)_typeSelectEndCurrentSearch;
- (void)clearView;
- (id)currentSearch;
- (void)setCurrentSearch:(id)a0;
- (id)nextSearchStringForNewValue:(id)a0;
- (void)scheduleEndOfSearch;
- (void)cancelScheduledEndOfSearch;
- (void)_resetCurrentSearchIndex;
- (id)initWithInitialSearchIndex:(long long)a0 totalIndexes:(long long)a1 forView:(id)a2;
- (long long)currentSearchIndex;
- (void)setCurrentSearchIndex:(long long)a0;
- (long long)initialSearchIndex;

@end

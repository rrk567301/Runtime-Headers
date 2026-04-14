@class NSString, NSView, NSTypeSelectPanel;

@interface _NSTypeSelectData : NSObject {
    NSString *_currentSearch;
    long long _currentSearchRow;
    long long _currentSearchCol;
    long long _initialSearchRow;
    long long _totalRows;
    NSView *_view;
    NSTypeSelectPanel *_typeSelectPanel;
    unsigned char _foundMatch : 1;
    unsigned int _reserved : 31;
}

+ (BOOL)ignoreTypos;

- (void)dealloc;
- (void)cancelScheduledEndOfSearch;
- (void)clearView;
- (long long)currentSearchCol;
- (void)_typeSelectEndCurrentSearch;
- (long long)currentSearchRow;
- (id)currentSearch;
- (void)scheduleEndOfSearch;
- (BOOL)foundMatch;
- (void)setCurrentSearchCol:(long long)a0;
- (id)nextSearchStringForNewValue:(id)a0;
- (long long)initialSearchRow;
- (void)setCurrentSearchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCurrentSearchRow:(long long)a0;
- (void)setCurrentSearch:(id)a0;
- (void)setFoundMatch:(BOOL)a0;
- (id)initWithInitialSearchRow:(long long)a0 totalRows:(long long)a1 forView:(id)a2;
- (void)_resetCurrentSearchRow;
- (void)_orderFrontTypeSelectPanel;

@end

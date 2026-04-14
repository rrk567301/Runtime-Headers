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
- (void)_typeSelectEndCurrentSearch;
- (void)_resetCurrentSearchRow;
- (id)initWithInitialSearchRow:(long long)a0 totalRows:(long long)a1 forView:(id)a2;
- (void)clearView;
- (id)currentSearch;
- (void)setCurrentSearch:(id)a0;
- (void)_orderFrontTypeSelectPanel;
- (void)setCurrentSearchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)nextSearchStringForNewValue:(id)a0;
- (long long)currentSearchRow;
- (void)setCurrentSearchRow:(long long)a0;
- (long long)currentSearchCol;
- (void)setCurrentSearchCol:(long long)a0;
- (long long)initialSearchRow;
- (void)scheduleEndOfSearch;
- (void)cancelScheduledEndOfSearch;
- (void)setFoundMatch:(BOOL)a0;
- (BOOL)foundMatch;

@end

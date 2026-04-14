@class NSString, NSTextField;

@interface NSTypeSelectPanel : NSPanel {
    NSTextField *_currentSeachTextField;
}

@property (copy) NSString *currentSearch;

- (void)dealloc;
- (id)init;
- (id)currentSearch;
- (void)setCurrentSearch:(id)a0;
- (void)_ensureCurrentSearchTextField;
- (void)setCurrentSearchScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

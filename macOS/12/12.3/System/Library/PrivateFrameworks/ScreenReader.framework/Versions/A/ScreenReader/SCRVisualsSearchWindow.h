@class NSString, AXVSearchWindow;

@interface SCRVisualsSearchWindow : NSObject

@property (retain, nonatomic, setter=_setSearchWindow:) AXVSearchWindow *_searchWindow;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *searchText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectionRange;

- (id)init;
- (void).cxx_destruct;
- (void)setBaseFontSize:(double)a0;
- (void)hideSearchWindow;
- (void)showSearchWindow;

@end

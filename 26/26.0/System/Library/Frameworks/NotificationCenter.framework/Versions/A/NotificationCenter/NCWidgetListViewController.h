@class NSArray, NSMutableArray;
@protocol NCWidgetListViewDelegate;

@interface NCWidgetListViewController : NSViewController {
    BOOL _editing;
    NSMutableArray *_contents;
}

@property (weak) id<NCWidgetListViewDelegate> delegate;
@property (copy) NSArray *contents;
@property unsigned long long minimumVisibleRowCount;
@property BOOL hasDividerLines;
@property BOOL editing;
@property BOOL showsAddButtonWhenEditing;

- (void).cxx_destruct;
- (id)_nibBundle;
- (unsigned long long)rowForViewController:(id)a0;
- (id)viewControllerAtRow:(unsigned long long)a0 makeIfNecessary:(BOOL)a1;

@end

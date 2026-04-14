@class PKAutocompleteViewController;
@protocol PKAutocompleteTableViewDelegate;

@interface PKAutocompleteTableView : NSTableView {
    long long _selectingRow;
}

@property (weak, nonatomic) id<PKAutocompleteTableViewDelegate> autocompleteDelegate;
@property (weak, nonatomic) PKAutocompleteViewController *autocompleteViewController;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (long long)_rowFromMouseEvent:(id)a0;

@end

@class NSTextField, NSImageView, NSDate, NSProgressIndicator, CalUILocationSuggestionResult, NSMutableArray, CNAutocompleteResult;

@interface EKUILocationTableCellView : NSTableCellView

@property (retain) CalUILocationSuggestionResult *suggestion;
@property (retain) CNAutocompleteResult *cnResult;
@property (retain) NSProgressIndicator *spinner;
@property (retain) NSTextField *titleField;
@property (retain) NSTextField *addressField;
@property (retain) NSImageView *iconView;
@property (retain) NSMutableArray *iconConstraints;
@property BOOL selected;
@property int freeBusyStatus;
@property (retain) NSDate *spinnerTime;

- (id)initWithResult:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0;
- (id)initWithTitle:(id)a0 address:(id)a1;
- (void)updateFreeBusyStatusIconOnMainThread;
- (void)updateStatusIcon;
- (void)updateStatusWithIcon:(id)a0;

@end

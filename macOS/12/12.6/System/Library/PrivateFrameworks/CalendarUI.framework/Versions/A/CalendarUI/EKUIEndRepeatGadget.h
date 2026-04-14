@class CalUIResizingTextField, NSTextField, NSView, NSArray, EKUIPopUpButton, NSNumber, NSString;

@interface EKUIEndRepeatGadget : EKUIDateTimeGadget <CalUIResizingTextFieldDelegate>

@property (retain) NSView *endRepeatContainerView;
@property (retain) EKUIPopUpButton *endRepeatTypePicker;
@property (retain) CalUIResizingTextField *numberOfTimesField;
@property (retain) NSTextField *numberOfTimesLabel;
@property (retain) NSArray *endConstraints;
@property (retain) NSNumber *selectedWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;
+ (BOOL)shouldShowAfter;

- (void).cxx_destruct;
- (BOOL)isEditable;
- (void)updateConstraints;
- (void)controlTextDidEndEditing:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (double)baselineOffset;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)datePickerChangedToDate:(id)a0;
- (id)viewForBaselineAlignment;
- (void)addNewMenuItemForEndType:(unsigned long long)a0 withTitle:(id)a1;
- (void)endTypeSelected:(id)a0;
- (void)removeRecurrenceEnd;
- (void)updateRecurrenceEndWithDate:(id)a0;
- (void)updateRecurrenceEndForAfterNumberOfOccurrences:(unsigned long long)a0;

@end

@class EKUICalendarPopUpButton;

@interface EKUILabelledCalendarGadget : EKUILabeledGadget

@property (retain) EKUICalendarPopUpButton *calendarPicker;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (double)horizontalPadding;
- (void).cxx_destruct;
- (id)iconSymbolName;
- (BOOL)needsExpansion;
- (id)labelString;
- (id)control;
- (void)calendarSelected:(id)a0;
- (double)controlVerticalPadding;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateWithChanges:(id)a0;

@end

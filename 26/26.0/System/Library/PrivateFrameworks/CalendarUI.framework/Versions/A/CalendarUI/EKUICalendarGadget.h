@class EKUICalendarPopUpButton, EKUIGadget;

@interface EKUICalendarGadget : EKUISingleViewGadget

@property (retain) EKUICalendarPopUpButton *calendarPicker;
@property (weak, nonatomic) EKUIGadget *compositeParent;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (double)preferredWidth;
- (id)initWithViewController:(id)a0;
- (double)verticalPadding;
- (double)horizontalPadding;
- (void).cxx_destruct;
- (BOOL)needsExpansion;
- (id)control;
- (void)calendarSelected:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end

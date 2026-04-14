@class EKUICalendarPopUpButton, EKUIGadget;

@interface EKUICalendarGadget : EKUISingleViewGadget

@property (retain) EKUICalendarPopUpButton *calendarPicker;
@property (weak, nonatomic) EKUIGadget *compositeParent;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (double)horizontalPadding;
- (double)preferredWidth;
- (double)verticalPadding;
- (BOOL)needsExpansion;
- (id)control;
- (void)calendarSelected:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end

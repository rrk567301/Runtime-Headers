@class EKUICalendarPopUpButton, EKUIGadget;

@interface EKUICalendarGadget : EKUISingleViewGadget

@property (retain) EKUICalendarPopUpButton *calendarPicker;
@property (weak, nonatomic) EKUIGadget *compositeParent;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (char)isEditable;
- (char)needsExpansion;
- (double)preferredWidth;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)calendarSelected:(id)a0;
- (double)horizontalPadding;
- (char)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end

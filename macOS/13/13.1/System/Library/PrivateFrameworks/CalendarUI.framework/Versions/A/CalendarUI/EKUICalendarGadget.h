@class EKUICalendarPopUpButton, EKUIGadget;

@interface EKUICalendarGadget : EKUISingleViewGadget

@property (retain) EKUICalendarPopUpButton *calendarPicker;
@property (weak, nonatomic) EKUIGadget *compositeParent;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (double)preferredWidth;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (BOOL)needsExpansion;
- (id)control;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (void)calendarSelected:(id)a0;
- (double)horizontalPadding;

@end

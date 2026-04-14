@class EKUIPopUpButton;

@interface EKUIAvailabilityGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *availabilityPicker;
@property BOOL showWorkingElsewhere;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)labelString;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (void)availabilityChanged:(id)a0;
- (void)addNewMenuItemToButtonForAvailability:(long long)a0 withTitle:(id)a1;
- (void)buildAvailabilityListForCalendar;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;

@end

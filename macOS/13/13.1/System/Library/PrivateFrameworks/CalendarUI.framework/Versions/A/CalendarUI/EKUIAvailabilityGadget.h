@class EKUIPopUpButton;

@interface EKUIAvailabilityGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *availabilityPicker;
@property BOOL showWorkingElsewhere;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEditable;
- (id)initWithViewController:(id)a0;
- (id)labelString;
- (id)control;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;
- (void)availabilityChanged:(id)a0;
- (void)addNewMenuItemToButtonForAvailability:(long long)a0 withTitle:(id)a1;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)buildAvailabilityListForCalendar;

@end

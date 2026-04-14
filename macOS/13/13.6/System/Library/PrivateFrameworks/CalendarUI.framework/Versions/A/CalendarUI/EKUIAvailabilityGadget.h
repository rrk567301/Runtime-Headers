@class EKUIPopUpButton;

@interface EKUIAvailabilityGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *availabilityPicker;
@property BOOL showWorkingElsewhere;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (id)initWithViewController:(id)a0;
- (BOOL)isEditable;
- (id)labelString;
- (id)control;
- (void)addNewMenuItemToButtonForAvailability:(long long)a0 withTitle:(id)a1;
- (void)availabilityChanged:(id)a0;
- (void)buildAvailabilityListForCalendar;
- (double)pixelsBetweenLabelAndControl;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateWithChanges:(id)a0;

@end

@class EKUIPopUpButton;

@interface EKUIAvailabilityGadget : EKUILabeledGadget

@property (retain) EKUIPopUpButton *availabilityPicker;
@property BOOL showWorkingElsewhere;

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (void)setObject:(id)a0;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)iconSymbolName;
- (id)labelString;
- (id)control;
- (id)recurrenceDifferenceDescription;
- (void)addNewMenuItemToButtonForAvailability:(long long)a0;
- (void)availabilityChanged:(id)a0;
- (void)buildAvailabilityListForCalendar;
- (id)displayStringForAvailability:(long long)a0;
- (double)pixelsBetweenLabelAndControl;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateWithChanges:(id)a0;

@end

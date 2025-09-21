@interface EKUIAllDayToggleGadget : EKUILabeledToggleGadget

+ (id)interestedChangeKeys;

- (BOOL)isEditable;
- (id)accessibilityIdentifier;
- (id)iconSymbolName;
- (id)labelString;
- (BOOL)canBeToggled;
- (BOOL)isToggledOn;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateEvent;

@end

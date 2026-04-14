@interface EKUIAllDayToggleGadget : EKUILabeledToggleGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (BOOL)isEditable;
- (id)iconSymbolName;
- (id)labelString;
- (BOOL)canBeToggled;
- (BOOL)isToggledOn;
- (BOOL)shouldDisplay;
- (BOOL)shouldDisplayWhenNotEditable;
- (void)updateEvent;

@end

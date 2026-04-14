@interface EKUINoteGadget : EKUISingleTextFieldGadget

+ (id)interestedChangeKeys;

- (BOOL)hasData;
- (id)accessibilityIdentifier;
- (id)initWithViewController:(id)a0;
- (double)maxHeight;
- (id)placeholderText;
- (id)claimedPboardTypes;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;

@end

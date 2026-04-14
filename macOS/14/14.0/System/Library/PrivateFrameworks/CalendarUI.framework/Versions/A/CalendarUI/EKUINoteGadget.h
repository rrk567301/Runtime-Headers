@interface EKUINoteGadget : EKUISingleTextFieldGadget

+ (id)interestedChangeKeys;

- (BOOL)hasData;
- (id)accessibilityIdentifier;
- (double)maxHeight;
- (id)initWithViewController:(id)a0;
- (id)placeholderText;
- (id)claimedPboardTypes;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;

@end

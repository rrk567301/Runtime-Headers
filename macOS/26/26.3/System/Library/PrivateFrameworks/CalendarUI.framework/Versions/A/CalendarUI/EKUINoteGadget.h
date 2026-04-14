@interface EKUINoteGadget : EKUISingleTextFieldGadget

+ (id)interestedChangeKeys;

- (id)initWithViewController:(id)a0;
- (id)accessibilityIdentifier;
- (BOOL)hasData;
- (double)maxHeight;
- (id)iconSymbolName;
- (id)placeholderText;
- (id)recurrenceDifferenceDescription;
- (id)claimedPboardTypes;
- (unsigned long long)recurrenceDifferenceCount;
- (id)recurrenceDifferenceTitle;
- (void)resetToOriginalItem;
- (void)updateEvent;
- (void)updateWithChanges:(id)a0;

@end

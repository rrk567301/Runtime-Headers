@interface EKUINoteGadget : EKUISingleTextFieldGadget

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (id)initWithViewController:(id)a0;
- (double)maxHeight;
- (BOOL)hasData;
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

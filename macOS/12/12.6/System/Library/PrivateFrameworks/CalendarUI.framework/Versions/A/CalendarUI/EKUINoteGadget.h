@interface EKUINoteGadget : EKUISingleTextFieldGadget

+ (id)interestedChangeKeys;

- (BOOL)hasData;
- (double)maxHeight;
- (id)initWithViewController:(id)a0;
- (id)placeholderText;
- (id)claimedPboardTypes;
- (void)updateWithChanges:(id)a0;
- (void)updateEvent;

@end

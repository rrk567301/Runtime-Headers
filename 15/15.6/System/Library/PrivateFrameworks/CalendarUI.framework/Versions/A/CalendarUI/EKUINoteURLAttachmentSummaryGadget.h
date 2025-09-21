@interface EKUINoteURLAttachmentSummaryGadget : EKUISummaryGadget

@property char hideBecauseAllIsolatedAreVisible;
@property char hasEverHadNote;
@property char hasEverHadURL;
@property char hasEverHadAttachment;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (id)accessibilityIdentifier;
- (double)preferredWidth;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (id)addAllString;
- (char)shouldDisplay;

@end

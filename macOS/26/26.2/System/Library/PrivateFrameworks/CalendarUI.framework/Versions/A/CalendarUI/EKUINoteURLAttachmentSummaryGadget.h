@interface EKUINoteURLAttachmentSummaryGadget : EKUISummaryGadget

@property BOOL hideBecauseAllIsolatedAreVisible;
@property BOOL hasEverHadNote;
@property BOOL hasEverHadURL;
@property BOOL hasEverHadAttachment;

+ (id)interestedChangeKeys;

- (id)accessibilityIdentifier;
- (id)initWithViewController:(id)a0;
- (void)setObject:(id)a0;
- (id)summaryString;
- (double)preferredWidth;
- (id)iconSymbolName;
- (id)addAllString;
- (BOOL)shouldDisplay;

@end

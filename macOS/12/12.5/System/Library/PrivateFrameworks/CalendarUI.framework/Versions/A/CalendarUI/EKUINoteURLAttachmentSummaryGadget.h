@interface EKUINoteURLAttachmentSummaryGadget : EKUISummaryGadget

@property BOOL hideBecauseAllIsolatedAreVisible;
@property BOOL hasEverHadNote;
@property BOOL hasEverHadURL;
@property BOOL hasEverHadAttachment;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (double)preferredWidth;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (BOOL)shouldDisplay;
- (id)addAllString;

@end

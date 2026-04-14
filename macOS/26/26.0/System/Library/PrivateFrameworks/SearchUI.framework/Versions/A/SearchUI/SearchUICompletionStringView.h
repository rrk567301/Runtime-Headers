@class NSFont, NSString, SearchUIMaskedLabelsStackView, SFSearchResult, SearchUICompletion, SFCardSection, NSColor, SearchUICompletionStringModel, SearchUIImageView;

@interface SearchUICompletionStringView : NUIContainerStackView <TLKImageViewDelegate>

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUIMaskedLabelsStackView *labelsStackView;
@property (retain) SFSearchResult *result;
@property (retain) SFCardSection *cardSection;
@property BOOL focusIsOnFirstResult;
@property (retain) SearchUICompletion *completion;
@property (retain, nonatomic) SearchUICompletionStringModel *searchFieldModel;
@property (retain, nonatomic) NSFont *fontForCompletionLabel;
@property (retain, nonatomic) NSColor *textColorForCompletionLabel;
@property (nonatomic) BOOL requireResultForCompletion;
@property (readonly) NSString *completionText;
@property (readonly) BOOL hasContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })appIconSize;
+ (unsigned long long)preferredAppIconVariant;
+ (BOOL)supportsImages;

- (id)extensionLabel;
- (id)init;
- (BOOL)hasPrefix;
- (void).cxx_destruct;
- (void)updateFields;
- (void)didFailToLoadImage;
- (void)didUpdateWithImage:(id)a0;
- (id)completionLabel;
- (id)bridgeLabel;
- (double)trailingPaddingForFieldEditor;
- (void)updateLabelStackVisibility;
- (void)updateWithResult:(id)a0 cardSection:(id)a1 focusIsOnFirstResult:(BOOL)a2;

@end

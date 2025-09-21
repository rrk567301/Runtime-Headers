@class NSFont, NSString, SearchUIMaskedLabelsStackView, SFSearchResult, SearchUICompletion, SFCardSection, NSColor, SearchUICompletionStringModel, SearchUIImageView;

@interface SearchUICompletionStringView : NUIContainerStackView <TLKImageViewDelegate>

@property (retain) SearchUIImageView *imageView;
@property (retain) SearchUIMaskedLabelsStackView *labelsStackView;
@property (retain) SFSearchResult *result;
@property (retain) SFCardSection *cardSection;
@property char focusIsOnFirstResult;
@property (retain) SearchUICompletion *completion;
@property (retain, nonatomic) SearchUICompletionStringModel *searchFieldModel;
@property (retain, nonatomic) NSFont *fontForCompletionLabel;
@property (retain, nonatomic) NSColor *textColorForCompletionLabel;
@property (retain, nonatomic) NSColor *selectionHighlightColor;
@property (readonly) NSString *completionText;
@property (readonly) double trailingPaddingForFieldEditor;
@property (readonly) char hasContent;
@property (readonly) char hasPrefix;
@property (readonly) NSString *copyableString;
@property (readonly) char completionResultIsPotentiallyPunchout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsImages;

- (id)init;
- (void).cxx_destruct;
- (id)extensionLabel;
- (void)updateFields;
- (void)didFailToLoadImage;
- (void)didUpdateWithImage:(id)a0;
- (id)completionLabel;
- (id)bridgeLabel;
- (void)updateLabelStackVisibility;
- (void)updateWithResult:(id)a0 cardSection:(id)a1 focusIsOnFirstResult:(char)a2;

@end

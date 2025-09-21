@class NSString, NSDictionary, NSArray, NSFont, NSColor;

@interface ABCardViewStyleProvider : NSObject

@property (readonly) NSFont *nameViewHeadlineFont;
@property (readonly) NSString *nameViewHeadlineFontName;
@property (readonly) double nameViewHeadlineFontSize;
@property (readonly) NSColor *nameViewHeadlineTextColor;
@property (readonly) NSDictionary *nameViewHeadlinePlaceholderAttributes;
@property (readonly) NSFont *nameViewTaglineFont;
@property (readonly) NSString *nameViewTaglineFontName;
@property (readonly) double nameViewTaglineFontSize;
@property (readonly) NSColor *nameViewTaglineTextColor;
@property (readonly) NSDictionary *nameViewTaglinePlaceholderAttributes;
@property (readonly) double nameViewFirstRowVerticalOffset;
@property (readonly) double nameViewInterrowPadding;
@property (readonly) double nameViewPhotoInsetLeading;
@property (readonly) char alignsNameViewTextWithImageMidpoint;
@property (readonly) NSFont *datumLabelFont;
@property (readonly) NSString *datumLabelFontName;
@property (readonly) double datumLabelFontSize;
@property (readonly) NSColor *datumLabelTextColor;
@property (readonly) NSColor *datumLabelSuggestionTextColor;
@property (readonly) NSColor *datumLabelMouseOverTextColor;
@property (readonly) NSColor *datumLabelMouseOverHighlightColor;
@property (readonly) NSColor *datumLabelPopupTextColor;
@property (readonly) char shouldAlignLabelWithTopOfValue;
@property (readonly) char reducedLabelTrailingInset;
@property (readonly) NSFont *datumValueFont;
@property (readonly) NSString *datumValueFontName;
@property (readonly) double datumValueFontSize;
@property (readonly) NSColor *datumValueTextColor;
@property (readonly) NSColor *datumValueSuggestionTextColor;
@property (readonly) NSColor *datumValueMouseOverTextColor;
@property (readonly) NSColor *datumValueMouseOverHighlightColor;
@property (readonly) NSDictionary *datumValuePlaceholderAttributes;
@property (readonly) double interPropertyPadding;
@property (readonly) double intraDatumPadding;
@property (readonly) double interColumnHorizontalPadding;
@property (readonly) double cardViewEditModeColumnInset;
@property (readonly) double cardViewNonEditModeAdditionalTopMargin;
@property (readonly) double cardViewTopMargin;
@property (readonly) double cardViewBottomMargin;
@property (readonly) double cardViewLeftMargin;
@property (readonly) double cardViewRightMargin;
@property (readonly) double cardTemplateViewTopMargin;
@property (readonly) double cardViewMinimumHeight;
@property (readonly) double collectionSeparatorInsetLeading;
@property (readonly) double collectionSeparatorInsetTrailing;
@property (readonly) double collectionViewLeftMargin;
@property (readonly) double collectionTemplateViewLeftMargin;
@property (readonly) NSArray *displayedCollectionViewProperties;
@property (readonly) char allowsLabelRolloverActions;
@property (readonly) char allowsNoteEditing;
@property (readonly) char allowsPhotoEditing;
@property (readonly) char allowsImmediateEditing;
@property (readonly) char allowsOnlyPastedInput;
@property (readonly) char isContentSizeObservable;

+ (id)os_log;
+ (id)effectiveFontWithName:(id)a0 size:(double)a1;

- (id)datumValuePlaceholderTextColor;

@end

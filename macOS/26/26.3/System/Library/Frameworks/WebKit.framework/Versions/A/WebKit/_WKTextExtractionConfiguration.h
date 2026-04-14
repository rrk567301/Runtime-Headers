@interface _WKTextExtractionConfiguration : NSObject

@property (nonatomic) BOOL mergeParagraphs;
@property (nonatomic) BOOL skipNearlyTransparentContent;
@property (nonatomic) BOOL canIncludeIdentifiers;
@property (nonatomic) BOOL shouldFilterText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (nonatomic) BOOL includeURLs;
@property (nonatomic) BOOL includeRects;
@property (nonatomic) unsigned long long maxWordsPerParagraph;

- (id)init;

@end

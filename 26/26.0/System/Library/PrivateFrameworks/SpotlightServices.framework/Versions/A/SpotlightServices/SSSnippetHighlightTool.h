@class NSArray;

@interface SSSnippetHighlightTool : NSObject

@property (retain, nonatomic) NSArray *terms;

+ (BOOL)isSegmentHighlighted:(id)a0;

- (void).cxx_destruct;
- (id)findAndMergeHighlightRangesInSnippet:(id)a0;
- (id)initWithTerms:(id)a0;
- (id)makeHighlightedSnippet:(id)a0;

@end

@class NSString, NSArray;

@interface SSSnippetRanker : NSObject

@property (readonly, nonatomic) NSString *fullText;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) NSArray *terms;

- (void).cxx_destruct;
- (id)initWithFullText:(id)a0 query:(id)a1 terms:(id)a2;
- (int)pickBestSnippet:(id)a0;

@end

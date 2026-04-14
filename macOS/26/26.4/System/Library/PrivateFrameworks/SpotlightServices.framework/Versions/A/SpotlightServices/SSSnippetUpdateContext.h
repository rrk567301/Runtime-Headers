@class NSString, NSArray;

@interface SSSnippetUpdateContext : NSObject

@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *answer;
@property (retain, nonatomic) NSArray *snippetQueryTerms;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 answer:(id)a1 snippetQueryTerms:(id)a2;

@end

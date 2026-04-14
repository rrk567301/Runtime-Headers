@class SEARCH_QU_PROTOParse, QPLLMParse;

@interface QPLLMParseResult : NSObject

@property (readonly, nonatomic) SEARCH_QU_PROTOParse *protoParse;
@property (readonly, nonatomic) QPLLMParse *llmParse;

+ (id)resultWithProtoParse:(id)a0 llmParse:(id)a1;

- (void).cxx_destruct;
- (id)initWithProtoParse:(id)a0 llmParse:(id)a1;

@end

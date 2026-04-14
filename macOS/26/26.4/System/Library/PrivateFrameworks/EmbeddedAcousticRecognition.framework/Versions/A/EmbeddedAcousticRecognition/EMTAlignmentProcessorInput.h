@class NSString, NSArray;

@interface EMTAlignmentProcessorInput : NSObject

@property (readonly, copy, nonatomic) NSString *sourceText;
@property (readonly, copy, nonatomic) NSArray *sourceTokens;
@property (readonly, copy, nonatomic) NSArray *targetTokens;
@property (readonly, copy, nonatomic) NSString *targetText;
@property (readonly, copy, nonatomic) NSArray *spans;
@property (readonly, copy, nonatomic) NSArray *wordTokens;

- (void).cxx_destruct;
- (id)initWithSourceText:(id)a0 sourceTokens:(id)a1 targetTokens:(id)a2 targetText:(id)a3 spans:(id)a4 wordTokens:(id)a5;

@end

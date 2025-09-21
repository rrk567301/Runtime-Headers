@class NSMutableArray;

@interface SCRCMathRowFormatter : NSObject

@property (retain, nonatomic) NSMutableArray *childrenStack;
@property (nonatomic) char isNumberOverride;

- (id)init;
- (void).cxx_destruct;
- (void)addIdentifier:(id)a0;
- (void)addCloseParenthesis:(char)a0;
- (void)addNumber:(id)a0 implicit:(char)a1;
- (void)addOpenParenthesis;
- (void)addOperator:(id)a0 implicit:(char)a1;
- (void)addRadicalWithRootIndex:(id)a0;
- (void)addSubscript:(id)a0 superscript:(id)a1;
- (void)appendMathEquation:(id)a0;
- (id)initWithIsNumberOverride:(char)a0;
- (id)mathEquation;
- (void)_addDictionary:(id)a0;

@end

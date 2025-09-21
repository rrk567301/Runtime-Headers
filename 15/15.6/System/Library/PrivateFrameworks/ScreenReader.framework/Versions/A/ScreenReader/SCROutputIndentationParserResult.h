@class NSArray;

@interface SCROutputIndentationParserResult : SCROutputPunctuationParserResult

@property (readonly, nonatomic) NSArray *trailingSpaceAndTabResults;

- (void).cxx_destruct;
- (id)initWithLength:(unsigned long long)a0 shouldPresent:(char)a1 repeatCount:(unsigned long long)a2 trailingSpaceAndTabResults:(id)a3 punctuationVerbosityLevel:(long long)a4;

@end

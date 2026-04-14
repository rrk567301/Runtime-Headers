@class NSString;

@interface SCROutputPunctuationParserResult : SCROutputSubstitutionParserResult

@property (readonly, nonatomic) NSString *punctuation;
@property (readonly, nonatomic) unsigned long long repeatCount;

- (void).cxx_destruct;
- (id)initWithLength:(unsigned long long)a0 kind:(unsigned long long)a1 shouldPresent:(BOOL)a2 punctuation:(id)a3 repeatCount:(unsigned long long)a4;

@end

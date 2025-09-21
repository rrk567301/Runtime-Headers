@class NSArray, NSString, _LTTranslationStatistics;

@interface _LTTranslationCandidate : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double confidence;
@property (nonatomic, getter=isLowConfidence) char lowConfidence;
@property (copy, nonatomic) NSArray *tokens;
@property (copy, nonatomic) NSString *formattedString;
@property (copy, nonatomic) NSString *sanitizedFormattedString;
@property (copy, nonatomic) NSArray *preToPostITN;
@property (copy, nonatomic) NSArray *senses;
@property (copy, nonatomic) NSArray *genderAlternatives;
@property (copy, nonatomic) _LTTranslationStatistics *statistics;
@property (copy, nonatomic) NSString *romanization;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

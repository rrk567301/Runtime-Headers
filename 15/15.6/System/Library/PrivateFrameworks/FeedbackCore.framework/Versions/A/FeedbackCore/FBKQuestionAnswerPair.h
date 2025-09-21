@class NSString;

@interface FBKQuestionAnswerPair : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *questionText;
@property (retain, nonatomic) NSString *answerText;
@property (nonatomic) char isRequired;
@property (nonatomic) unsigned long long answerType;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (id)initWithQuestionText:(id)a0 andAnswerText:(id)a1;
- (char)setPropertiesFromJSONObject:(id)a0;

@end

@interface CLSAnswerFormat : CLSAbstractAnswerFormat {
    long long _answerFormatType;
}

+ (char)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (char)validateObject:(id *)a0;
- (long long)answerFormatType;
- (void)setAnswerFormatType:(long long)a0;

@end

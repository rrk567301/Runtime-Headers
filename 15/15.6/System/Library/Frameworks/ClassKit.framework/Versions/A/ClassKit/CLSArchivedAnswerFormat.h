@interface CLSArchivedAnswerFormat : CLSAbstractAnswerFormat {
    long long _answerFormatType;
}

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (long long)answerFormatType;
- (void)setAnswerFormatType:(long long)a0;

@end

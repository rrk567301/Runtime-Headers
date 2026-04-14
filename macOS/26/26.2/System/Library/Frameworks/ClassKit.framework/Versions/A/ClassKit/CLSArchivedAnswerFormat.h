@interface CLSArchivedAnswerFormat : CLSAbstractAnswerFormat {
    long long _answerFormatType;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (long long)answerFormatType;
- (void)setAnswerFormatType:(long long)a0;

@end

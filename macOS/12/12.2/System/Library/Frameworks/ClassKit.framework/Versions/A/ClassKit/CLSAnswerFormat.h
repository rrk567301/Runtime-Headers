@interface CLSAnswerFormat : CLSObject {
    long long _answerFormatType;
}

@property (readonly, nonatomic) long long answerFormatType;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (BOOL)validateObject:(id *)a0;
- (void)setAnswerFormatType:(long long)a0;

@end

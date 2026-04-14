@interface CLSSurveyStep : CLSAbstractSurveyStep {
    long long _version;
    long long _type;
}

+ (BOOL)supportsSecureCoding;

- (void)setType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setVersion:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (long long)version;
- (BOOL)validateObject:(id *)a0;

@end

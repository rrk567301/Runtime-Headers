@interface CLSArchivedSurveyStep : CLSAbstractSurveyStep {
    long long _version;
    long long _type;
}

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setType:(long long)a0;
- (long long)type;
- (long long)version;
- (void)setVersion:(long long)a0;

@end

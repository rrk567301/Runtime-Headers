@interface CLSArchivedSurveyStep : CLSAbstractSurveyStep {
    long long _version;
    long long _type;
}

+ (BOOL)supportsSecureCoding;

- (long long)version;
- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (void)setType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setVersion:(long long)a0;

@end

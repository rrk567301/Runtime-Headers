@interface SiriInformationTypes.UserPromptExperience : SiriInformationSearch.Experience {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ promptType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@interface SiriInformationTypes.UserPromptExperience : SiriInformationSearch.Experience {
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ promptType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

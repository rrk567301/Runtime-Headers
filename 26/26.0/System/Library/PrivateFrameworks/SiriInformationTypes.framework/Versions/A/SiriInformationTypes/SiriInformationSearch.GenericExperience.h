@interface SiriInformationSearch.GenericExperience : SiriInformationSearch.Experience {
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ serverSuggestions;
    void /* unknown type, empty encoding */ sageExperience;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

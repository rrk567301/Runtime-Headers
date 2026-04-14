@interface SiriInformationSearch.GenericExperience : SiriInformationSearch.Experience {
    void /* unknown type, empty encoding */ components;
    void /* unknown type, empty encoding */ renderOptions;
    void /* unknown type, empty encoding */ serverSuggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

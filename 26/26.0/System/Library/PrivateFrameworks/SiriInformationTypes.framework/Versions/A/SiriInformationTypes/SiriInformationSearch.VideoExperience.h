@interface SiriInformationSearch.VideoExperience : SiriInformationSearch.Experience {
    void /* unknown type, empty encoding */ videoClientComponent;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

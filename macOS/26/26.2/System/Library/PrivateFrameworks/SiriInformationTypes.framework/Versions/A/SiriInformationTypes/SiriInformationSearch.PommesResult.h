@interface SiriInformationSearch.PommesResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resultId;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ metadata;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

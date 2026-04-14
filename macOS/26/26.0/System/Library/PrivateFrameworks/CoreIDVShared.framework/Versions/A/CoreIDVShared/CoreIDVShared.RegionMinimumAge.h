@interface CoreIDVShared.RegionMinimumAge : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ countryCode;
    void /* unknown type, empty encoding */ age;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

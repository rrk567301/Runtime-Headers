@interface SearchIntrospectionKit.SISpotlightResponse : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ resultSections;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

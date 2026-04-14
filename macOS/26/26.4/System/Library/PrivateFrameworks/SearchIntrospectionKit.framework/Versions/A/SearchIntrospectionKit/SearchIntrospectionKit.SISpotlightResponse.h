@interface SearchIntrospectionKit.SISpotlightResponse : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ resultSections;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

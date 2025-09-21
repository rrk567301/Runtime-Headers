@interface SearchIntrospectionKit.SISpotlightResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ resultSections;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

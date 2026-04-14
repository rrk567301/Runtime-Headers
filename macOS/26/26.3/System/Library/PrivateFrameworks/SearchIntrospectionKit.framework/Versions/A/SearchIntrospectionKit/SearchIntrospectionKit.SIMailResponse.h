@interface SearchIntrospectionKit.SIMailResponse : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ resultSections;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

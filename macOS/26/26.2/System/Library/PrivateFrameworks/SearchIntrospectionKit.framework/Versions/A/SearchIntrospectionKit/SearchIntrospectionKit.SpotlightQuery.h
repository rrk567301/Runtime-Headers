@interface SearchIntrospectionKit.SpotlightQuery : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ queryString;
    void /* unknown type, empty encoding */ queryIdentifier;
    void /* unknown type, empty encoding */ queryFilter;
    void /* unknown type, empty encoding */ spotlightQueryKind;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

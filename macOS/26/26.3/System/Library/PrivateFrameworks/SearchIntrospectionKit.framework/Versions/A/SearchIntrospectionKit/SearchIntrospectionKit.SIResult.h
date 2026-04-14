@interface SearchIntrospectionKit.SIResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resultText;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

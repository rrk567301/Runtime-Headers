@interface FinanceKit.StorableColor : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ red;
    void /* unknown type, empty encoding */ green;
    void /* unknown type, empty encoding */ blue;
    void /* unknown type, empty encoding */ alpha;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end

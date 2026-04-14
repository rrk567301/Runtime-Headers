@interface HKAnySecureCoding : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ encodedObjectType;
    void /* unknown type, empty encoding */ payload;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@interface GPImageAndFormat : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ format;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ orientation;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

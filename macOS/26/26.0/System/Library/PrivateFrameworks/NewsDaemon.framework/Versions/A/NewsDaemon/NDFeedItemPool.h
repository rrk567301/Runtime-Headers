@interface NDFeedItemPool : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ underlyingType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

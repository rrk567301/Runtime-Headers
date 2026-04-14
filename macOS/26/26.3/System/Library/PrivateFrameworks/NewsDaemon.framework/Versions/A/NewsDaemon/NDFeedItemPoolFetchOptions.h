@interface NDFeedItemPoolFetchOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ maxAge;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

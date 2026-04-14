@class NSURL;

@interface FSServerURLResource : FSResource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *url;

+ (id)resourceWithURL:(id)a0;

- (Class)classForCoder;
- (long long)kind;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)makeProxy;
- (id)getResourceID;

@end

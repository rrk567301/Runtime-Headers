@class NSURL;

@interface FSServerURLResource : FSResource <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *url;

+ (id)resourceWithURL:(id)a0;

- (long long)kind;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)makeProxy;
- (id)getResourceID;

@end

@class NSURL;

@interface FSGenericURLResource : FSResource

@property (readonly, copy) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (id)resourceWithURL:(id)a0;

- (long long)kind;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)URL;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)makeProxy;
- (id)getResourceID;

@end

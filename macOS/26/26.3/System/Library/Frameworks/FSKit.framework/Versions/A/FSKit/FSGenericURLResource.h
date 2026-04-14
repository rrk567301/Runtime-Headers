@class NSURL;

@interface FSGenericURLResource : FSResource

@property (readonly, copy) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (id)resourceWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)URL;
- (long long)kind;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)makeProxy;
- (id)getResourceID;

@end

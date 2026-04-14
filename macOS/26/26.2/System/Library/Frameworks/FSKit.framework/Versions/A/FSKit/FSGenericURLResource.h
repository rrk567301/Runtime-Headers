@class NSURL;

@interface FSGenericURLResource : FSResource

@property (readonly, copy) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (id)resourceWithURL:(id)a0;

- (long long)kind;
- (id)initWithCoder:(id)a0;
- (id)URL;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)makeProxy;
- (id)getResourceID;

@end

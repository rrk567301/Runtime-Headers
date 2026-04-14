@class NSURL;

@interface FSGenericURLResource : FSResource

@property (readonly, copy) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (id)resourceWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (long long)kind;
- (id)URL;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)makeProxy;
- (id)getResourceID;

@end

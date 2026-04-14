@class NSURL;

@interface FSServerURLResource : FSResource

@property (readonly) NSURL *url;

+ (BOOL)supportsSecureCoding;
+ (id)newWithURL:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (int)kind;
- (id)getResourceID;

@end

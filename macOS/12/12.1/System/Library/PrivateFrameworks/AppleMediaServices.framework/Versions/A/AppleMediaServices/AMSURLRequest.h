@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>

@property (retain) AMSURLRequestProperties *properties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 cachePolicy:(unsigned long long)a1 timeoutInterval:(double)a2;
- (id)_initWithCFURLRequest:(struct _CFURLRequest { } *)a0;
- (id)initWithRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)initWithRequest:(id)a0 properties:(id)a1;

@end

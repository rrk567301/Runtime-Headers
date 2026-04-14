@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery {
    NSURL *_bundleURL;
}

+ (BOOL)supportsSecureCoding;

- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_bundleURL;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end

@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery {
    NSURL *_bundleURL;
}

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_bundleURL;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_initWithURL:(id)a0;

@end

@class INImage, NSString;

@interface INDefaultCardTemplate : NSObject <INKeyImageProducing, INImageProxyInjecting, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *title;
@property (copy) NSString *subtitle;
@property (copy) INImage *image;

- (id)initWithTitle:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

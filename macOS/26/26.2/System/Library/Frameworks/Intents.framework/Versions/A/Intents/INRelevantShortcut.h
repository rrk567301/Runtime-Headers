@class NSString, INShortcut, NSArray, INDefaultCardTemplate, INImage;

@interface INRelevantShortcut : NSObject <INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) INShortcut *shortcut;
@property (copy) NSArray *relevanceProviders;
@property (copy) INDefaultCardTemplate *watchTemplate;
@property (copy) NSString *widgetKind;
@property long long shortcutRole;

- (id)initWithCoder:(id)a0;
- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)init;
- (id)initWithShortcut:(id)a0;

@end

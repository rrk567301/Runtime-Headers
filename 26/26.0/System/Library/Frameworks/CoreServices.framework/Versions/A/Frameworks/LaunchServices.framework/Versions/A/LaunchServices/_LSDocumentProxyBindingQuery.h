@class LSClaimBindingConfiguration;

@interface _LSDocumentProxyBindingQuery : _LSQuery

@property (nonatomic) BOOL yieldClaimBindings;
@property (readonly, nonatomic) LSClaimBindingConfiguration *bindingConfiguration;

+ (BOOL)supportsSecureCoding;
+ (id)bindingConfigurationForDocument:(id)a0 style:(unsigned char)a1 handlerRank:(id)a2;

- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)_handlerRank;
- (id)initWithBindingConfiguration:(id)a0;
- (id)initWithDocumentProxy:(id)a0 style:(unsigned char)a1 handlerRank:(id)a2;

@end

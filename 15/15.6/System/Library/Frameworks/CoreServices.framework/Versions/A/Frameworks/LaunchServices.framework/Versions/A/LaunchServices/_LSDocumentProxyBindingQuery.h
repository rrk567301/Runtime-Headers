@class LSDocumentProxy, NSString;

@interface _LSDocumentProxyBindingQuery : _LSQuery

@property (nonatomic) char yieldClaimBindings;
@property (readonly, retain, nonatomic) LSDocumentProxy *documentProxy;
@property (readonly, nonatomic) unsigned char style;
@property (readonly, copy, nonatomic) NSString *handlerRank;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (char)_requiresDatabaseMappingEntitlement;
- (id)initWithDocumentProxy:(id)a0 style:(unsigned char)a1 handlerRank:(id)a2;

@end

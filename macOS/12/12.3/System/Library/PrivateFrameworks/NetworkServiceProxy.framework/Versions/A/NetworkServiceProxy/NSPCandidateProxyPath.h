@class NSString, NSData, NSPProxyTokenInfo;

@interface NSPCandidateProxyPath : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSPProxyTokenInfo *ingressProxy;
@property (retain, nonatomic) NSPProxyTokenInfo *egressProxy;
@property (nonatomic) unsigned long long proxyPathWeight;
@property (retain, nonatomic) NSString *preferredPathConfigURI;
@property (retain, nonatomic) NSData *domainFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)matchIngress:(id)a0;
- (BOOL)matchEgress:(id)a0;
- (id)initWithIngressProxy:(id)a0 egressProxy:(id)a1 proxyPathWeight:(unsigned long long)a2 preferredPathConfigURI:(id)a3;
- (BOOL)proxyPathReady;
- (void)fetchDomainFilter:(id /* block */)a0;

@end

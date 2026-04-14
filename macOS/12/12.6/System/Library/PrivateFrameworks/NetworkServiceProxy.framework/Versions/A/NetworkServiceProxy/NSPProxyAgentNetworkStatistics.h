@class NSDictionary;

@interface NSPProxyAgentNetworkStatistics : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *networkCharacteristics;
@property (nonatomic) unsigned long long proxyConnectionSuccess;
@property (nonatomic) unsigned long long ingressProxyConnectionTimeout;
@property (nonatomic) unsigned long long ingressProxyConnectionRefused;
@property (nonatomic) unsigned long long ingressProxyConnectionHostDown;
@property (nonatomic) unsigned long long ingressProxyConnectionHostUnreachable;
@property (nonatomic) unsigned long long ingressProxyConnectionError;
@property (nonatomic) unsigned long long ingressProxyConnectionDNSTimeout;
@property (nonatomic) unsigned long long ingressProxyConnectionDNSBlocked;
@property (nonatomic) unsigned long long ingressProxyConnectionCertError;
@property (nonatomic) unsigned long long egressProxyConnectionError;
@property (nonatomic) unsigned long long originProxyConnectionError;
@property (nonatomic) unsigned long long egressProxyUnavailableError;
@property (nonatomic) unsigned long long incompleteHandshakeStall;
@property (nonatomic) unsigned long long postHandshakeStall;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)resetStats;

@end

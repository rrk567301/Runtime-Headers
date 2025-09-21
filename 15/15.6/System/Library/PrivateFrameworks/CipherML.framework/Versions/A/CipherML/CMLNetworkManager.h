@class NSURL, NSData;

@interface CMLNetworkManager : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSURL *endpoint;
@property (copy, nonatomic) NSURL *issuer;
@property (copy, nonatomic) NSData *authenticationToken;
@property (nonatomic) char privacyProxyFailOpen;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)initWithType:(long long)a0 endpoint:(id)a1 issuer:(id)a2 authenticationToken:(id)a3;
- (id)initWithType:(long long)a0 endpoint:(id)a1 issuer:(id)a2 authenticationToken:(id)a3 privacyProxyFailOpen:(char)a4;
- (char)isEqualToNetworkManager:(id)a0;

@end

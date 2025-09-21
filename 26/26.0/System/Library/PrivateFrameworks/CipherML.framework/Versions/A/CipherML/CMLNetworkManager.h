@class NSURL, NSString;

@interface CMLNetworkManager : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSURL *endpoint;
@property (copy, nonatomic) NSURL *issuer;
@property (copy, nonatomic) NSString *authenticationToken;
@property (copy, nonatomic) NSString *featureId;
@property (nonatomic) BOOL privacyProxyFailOpen;

- (id)initWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 endpoint:(id)a1 issuer:(id)a2 authenticationToken:(id)a3 privacyProxyFailOpen:(BOOL)a4;
- (id)initWithType:(long long)a0 endpoint:(id)a1 issuer:(id)a2 bearerToken:(id)a3 featureId:(id)a4 privacyProxyFailOpen:(BOOL)a5;
- (id)initWithType:(long long)a0 endpoint:(id)a1 issuer:(id)a2 bearerToken:(id)a3 privacyProxyFailOpen:(BOOL)a4;
- (id)initWithType:(long long)a0 featureId:(id)a1 endpoint:(id)a2 privacyProxyFailOpen:(BOOL)a3;
- (BOOL)isEqualToNetworkManager:(id)a0;

@end

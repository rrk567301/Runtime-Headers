@class SFRevocationPolicy, SFTrustPolicy, NSArray;

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding> {
    id _trustEvaluatorInternal;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) SFTrustPolicy *trustPolicy;
@property (copy, nonatomic) SFRevocationPolicy *revocationPolicy;
@property (copy, nonatomic) NSArray *applicationAnchorCertificates;
@property (nonatomic) char allowCertificateFetching;
@property (nonatomic) char trustSystemAnchorCertificates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)evaluateCertificateChain:(id)a0 forDate:(id)a1 resultHandler:(id /* block */)a2;
- (id)initWithTrustPolicy:(id)a0;
- (id)initWithTrustPolicy:(id)a0 revocationPolicy:(id)a1;
- (id)initWithTrustPolicy:(id)a0 revocationPolicy:(id)a1 applicationAnchorCertificates:(id)a2 allowCertificateFetching:(char)a3 trustSystemAnchorCertificates:(char)a4;

@end

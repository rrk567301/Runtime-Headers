@class CRKIdentityConfiguration;

@interface CRKIdentityRefFactory : NSObject

@property (readonly, copy, nonatomic) CRKIdentityConfiguration *configuration;

- (id)initWithConfiguration:(id)a0;
- (id)subject;
- (id)init;
- (void).cxx_destruct;
- (const void *)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)a0;
- (void)addClientAndServerAuthEKUsToParameters:(id)a0;
- (id)certificateParametersWithCMSAlgorithm:(const void *)a0;
- (id)keyParameters;
- (struct __SecIdentity { } *)makeIdentityRefWithError:(id *)a0;
- (void)safeRelease:(void *)a0;

@end

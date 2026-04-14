@class NSArray;

@interface MIBUEAPConfiguartion : NSObject

@property (copy, nonatomic) NSArray *tlsCertificateChain;
@property (readonly, nonatomic) struct __SecKey { } *tlsKey;

- (void).cxx_destruct;
- (id)init;
- (void)setTLSKey:(struct __SecKey { } *)a0;

@end

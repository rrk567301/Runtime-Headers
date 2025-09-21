@class NSString, PKAddCarKeyPassConfiguration;

@interface PKCarKeyTerminalPairingCredential : PKPaymentCredential

@property (readonly, nonatomic) PKAddCarKeyPassConfiguration *configuration;
@property (readonly, nonatomic) NSString *productIdentifier;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)_isEqualToCredential:(id)a0;
- (id)initWithConfiguration:(id)a0 productIdentifier:(id)a1;

@end

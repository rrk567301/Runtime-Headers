@class POKeyExchangeResponseJWTBody;

@interface POKeyExchangeResponseJWT : POJWT

@property (retain) POKeyExchangeResponseJWTBody *decodedBody;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopy;
- (void)updateDecodedBody;

@end

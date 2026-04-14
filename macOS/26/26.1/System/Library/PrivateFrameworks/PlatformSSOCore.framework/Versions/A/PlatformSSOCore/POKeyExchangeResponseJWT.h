@class POKeyExchangeResponseJWTBody;

@interface POKeyExchangeResponseJWT : POJWT

@property (retain) POKeyExchangeResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

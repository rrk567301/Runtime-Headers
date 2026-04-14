@class POKeyExchangeResponseJWTBody;

@interface POKeyExchangeResponseJWT : POJWT

@property (retain) POKeyExchangeResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end

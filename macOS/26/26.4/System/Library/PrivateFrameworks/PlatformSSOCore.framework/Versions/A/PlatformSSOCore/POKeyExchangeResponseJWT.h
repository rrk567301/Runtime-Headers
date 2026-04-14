@class POKeyExchangeResponseJWTBody;

@interface POKeyExchangeResponseJWT : POJWT

@property (retain) POKeyExchangeResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDecodedBody;

@end

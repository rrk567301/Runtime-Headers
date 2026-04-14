@class POKeyExchangeRequestJWTBody;

@interface POKeyExchangeRequestJWT : POJWT

@property (retain) POKeyExchangeRequestJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

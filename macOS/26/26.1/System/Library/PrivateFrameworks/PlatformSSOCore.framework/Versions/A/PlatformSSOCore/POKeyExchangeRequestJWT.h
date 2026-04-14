@class POKeyExchangeRequestJWTBody;

@interface POKeyExchangeRequestJWT : POJWT

@property (retain) POKeyExchangeRequestJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

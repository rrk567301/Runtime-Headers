@class POKeyExchangeRequestJWTBody;

@interface POKeyExchangeRequestJWT : POJWT

@property (retain) POKeyExchangeRequestJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

@class POKeyExchangeRequestJWTBody;

@interface POKeyExchangeRequestJWT : POJWT

@property (retain) POKeyExchangeRequestJWTBody *decodedBody;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopy;
- (void)updateDecodedBody;

@end

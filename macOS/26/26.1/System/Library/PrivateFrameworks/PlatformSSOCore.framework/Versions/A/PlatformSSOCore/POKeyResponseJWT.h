@class POKeyResponseJWTBody;

@interface POKeyResponseJWT : POJWT

@property (retain) POKeyResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

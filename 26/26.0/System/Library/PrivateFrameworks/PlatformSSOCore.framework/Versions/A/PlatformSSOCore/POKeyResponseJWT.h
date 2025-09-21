@class POKeyResponseJWTBody;

@interface POKeyResponseJWT : POJWT

@property (retain) POKeyResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

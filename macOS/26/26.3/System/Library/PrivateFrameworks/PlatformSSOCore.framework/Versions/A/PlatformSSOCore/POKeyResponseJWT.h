@class POKeyResponseJWTBody;

@interface POKeyResponseJWT : POJWT

@property (retain) POKeyResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end

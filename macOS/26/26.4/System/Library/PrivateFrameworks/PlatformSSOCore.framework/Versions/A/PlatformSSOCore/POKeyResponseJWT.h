@class POKeyResponseJWTBody;

@interface POKeyResponseJWT : POJWT

@property (retain) POKeyResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDecodedBody;

@end

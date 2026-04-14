@class POKeyResponseJWTBody;

@interface POKeyResponseJWT : POJWT

@property (retain) POKeyResponseJWTBody *decodedBody;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopy;
- (void)updateDecodedBody;

@end

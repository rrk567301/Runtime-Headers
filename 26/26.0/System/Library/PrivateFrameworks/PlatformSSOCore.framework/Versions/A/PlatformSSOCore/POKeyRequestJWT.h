@class POKeyRequestJWTBody;

@interface POKeyRequestJWT : POJWT

@property (retain) POKeyRequestJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

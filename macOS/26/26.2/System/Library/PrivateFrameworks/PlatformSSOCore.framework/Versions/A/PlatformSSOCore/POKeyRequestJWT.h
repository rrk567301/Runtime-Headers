@class POKeyRequestJWTBody;

@interface POKeyRequestJWT : POJWT

@property (retain) POKeyRequestJWTBody *decodedBody;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopy;
- (void)updateDecodedBody;

@end

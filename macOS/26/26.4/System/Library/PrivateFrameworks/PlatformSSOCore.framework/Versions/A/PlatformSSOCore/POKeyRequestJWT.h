@class POKeyRequestJWTBody;

@interface POKeyRequestJWT : POJWT

@property (retain) POKeyRequestJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDecodedBody;

@end

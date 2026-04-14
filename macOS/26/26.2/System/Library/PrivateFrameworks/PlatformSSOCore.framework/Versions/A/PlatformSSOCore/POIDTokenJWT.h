@class POIDTokenJWTBody;

@interface POIDTokenJWT : POJWT

@property (retain) POIDTokenJWTBody *decodedBody;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopy;
- (void)updateDecodedBody;

@end

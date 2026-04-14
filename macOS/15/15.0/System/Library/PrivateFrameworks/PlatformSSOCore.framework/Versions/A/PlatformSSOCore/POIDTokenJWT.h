@class POIDTokenJWTBody;

@interface POIDTokenJWT : POJWT

@property (retain) POIDTokenJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

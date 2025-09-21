@class POIDTokenJWTBody;

@interface POIDTokenJWT : POJWT

@property (retain) POIDTokenJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

@class POIDTokenJWTBody;

@interface POIDTokenJWT : POJWT

@property (retain) POIDTokenJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDecodedBody;

@end

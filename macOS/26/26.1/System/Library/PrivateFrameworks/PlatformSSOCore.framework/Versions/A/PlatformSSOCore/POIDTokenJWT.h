@class POIDTokenJWTBody;

@interface POIDTokenJWT : POJWT

@property (retain) POIDTokenJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

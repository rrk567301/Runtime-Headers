@class POLoginJWTBody;

@interface POLoginTokenJWT : POJWT

@property (retain) POLoginJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

@class POLoginJWTBody;

@interface POLoginTokenJWT : POJWT

@property (retain) POLoginJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDecodedBody;

@end

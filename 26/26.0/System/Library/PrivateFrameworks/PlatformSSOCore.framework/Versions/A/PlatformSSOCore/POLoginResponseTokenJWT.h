@class POLoginResponseJWTBody;

@interface POLoginResponseTokenJWT : POJWT

@property (retain) POLoginResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

@class POLoginResponseJWTBody;

@interface POLoginResponseTokenJWT : POJWT

@property (retain) POLoginResponseJWTBody *decodedBody;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopy;
- (void)updateDecodedBody;

@end

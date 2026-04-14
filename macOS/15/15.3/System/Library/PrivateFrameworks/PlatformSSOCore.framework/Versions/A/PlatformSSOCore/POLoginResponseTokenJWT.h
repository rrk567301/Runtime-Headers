@class POLoginResponseJWTBody;

@interface POLoginResponseTokenJWT : POJWT

@property (retain) POLoginResponseJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

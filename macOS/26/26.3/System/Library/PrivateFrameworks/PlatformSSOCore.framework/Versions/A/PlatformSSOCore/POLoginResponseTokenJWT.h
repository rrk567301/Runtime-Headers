@class POLoginResponseJWTBody;

@interface POLoginResponseTokenJWT : POJWT

@property (retain) POLoginResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end

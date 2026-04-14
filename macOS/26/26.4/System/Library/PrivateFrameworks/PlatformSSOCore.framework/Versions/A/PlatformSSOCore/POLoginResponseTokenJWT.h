@class POLoginResponseJWTBody;

@interface POLoginResponseTokenJWT : POJWT

@property (retain) POLoginResponseJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDecodedBody;

@end

@class POAssertionJWTBody;

@interface POAssertionTokenJWT : POJWT

@property (retain) POAssertionJWTBody *decodedBody;

- (id)description;
- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

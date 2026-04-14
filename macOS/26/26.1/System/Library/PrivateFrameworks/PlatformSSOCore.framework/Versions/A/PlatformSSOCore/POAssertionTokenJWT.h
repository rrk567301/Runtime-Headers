@class POAssertionJWTBody;

@interface POAssertionTokenJWT : POJWT

@property (retain) POAssertionJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateDecodedBody;

@end

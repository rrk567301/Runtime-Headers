@class POAssertionJWTBody;

@interface POAssertionTokenJWT : POJWT

@property (retain) POAssertionJWTBody *decodedBody;

- (id)mutableCopy;
- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)updateDecodedBody;

@end

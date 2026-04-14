@class POAssertionJWTBody;

@interface POAssertionTokenJWT : POJWT

@property (retain) POAssertionJWTBody *decodedBody;

- (id)mutableCopy;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDecodedBody;

@end

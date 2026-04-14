@class POLoginResponseJWTBody;

@interface POMutableLoginResponseTokenJWT : POMutableJWT

@property (retain) POLoginResponseJWTBody *body;

- (void).cxx_destruct;
- (id)description;

@end

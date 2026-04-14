@class NSMutableData, NSString, NSDate;

@interface POAssertionJWTBody : _POJWTBodyBase

@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *aud;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *scope;
@property (readonly) NSMutableData *password;

- (id)dataRepresentation;
- (id)mutableCopy;
- (id)password;
- (id)nonce;
- (void).cxx_destruct;
- (id)sub;
- (id)scope;
- (id)description;
- (void)dealloc;
- (id)exp;
- (id)initWithJWTData:(id)a0;
- (id)iss;
- (id)aud;
- (id)iat;
- (id)request_nonce;
- (void)zeroPassword;

@end

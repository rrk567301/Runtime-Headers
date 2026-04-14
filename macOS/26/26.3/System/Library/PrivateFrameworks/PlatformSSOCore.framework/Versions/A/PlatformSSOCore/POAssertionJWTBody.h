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

- (id)nonce;
- (id)mutableCopy;
- (id)password;
- (id)dataRepresentation;
- (id)scope;
- (id)description;
- (id)sub;
- (void).cxx_destruct;
- (void)dealloc;
- (id)exp;
- (id)initWithJWTData:(id)a0;
- (id)iat;
- (id)aud;
- (id)iss;
- (id)request_nonce;
- (void)zeroPassword;

@end

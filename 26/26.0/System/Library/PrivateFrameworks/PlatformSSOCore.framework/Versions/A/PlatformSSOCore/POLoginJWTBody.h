@class NSString, NSArray, NSMutableData, NSDate;

@interface POLoginJWTBody : _POJWTBodyBase

@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *aud;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSString *assertion;
@property (readonly) NSString *client_id;
@property (readonly) NSString *scope;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *grant_type;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *username;
@property (readonly) NSMutableData *password;
@property (readonly) NSArray *amr;

- (id)dataRepresentation;
- (id)sub;
- (id)assertion;
- (id)scope;
- (id)mutableCopy;
- (void)dealloc;
- (id)password;
- (id)description;
- (id)username;
- (void).cxx_destruct;
- (id)nonce;
- (id)exp;
- (id)client_id;
- (id)initWithJWTData:(id)a0;
- (id)amr;
- (id)aud;
- (id)iat;
- (id)iss;
- (id)grant_type;
- (id)refresh_token;
- (id)request_nonce;
- (void)zeroPassword;

@end

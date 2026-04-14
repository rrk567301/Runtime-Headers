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
- (id)mutableCopy;
- (id)username;
- (id)password;
- (id)nonce;
- (id)assertion;
- (void).cxx_destruct;
- (id)sub;
- (id)scope;
- (id)description;
- (void)dealloc;
- (id)exp;
- (id)client_id;
- (id)initWithJWTData:(id)a0;
- (id)iss;
- (id)amr;
- (id)aud;
- (id)iat;
- (id)grant_type;
- (id)refresh_token;
- (id)request_nonce;
- (void)zeroPassword;

@end

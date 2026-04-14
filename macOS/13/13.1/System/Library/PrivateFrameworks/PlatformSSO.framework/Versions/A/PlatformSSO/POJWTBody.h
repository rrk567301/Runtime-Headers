@class NSDictionary, NSMutableDictionary, NSString, NSArray, NSMutableData, NSDate, NSNumber;

@interface POJWTBody : NSObject

@property (retain) NSMutableDictionary *data;
@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *aud;
@property (readonly) NSArray *audArray;
@property (readonly) NSString *azp;
@property (readonly) NSString *iss;
@property (readonly) NSString *sub;
@property (readonly) NSDate *iat;
@property (readonly) NSDate *exp;
@property (readonly) NSDate *nbf;
@property (readonly) NSString *use;
@property (readonly) NSString *assertion;
@property (readonly) NSString *client_id;
@property (readonly) NSString *scope;
@property (readonly) NSString *nonce;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *grant_type;
@property (readonly) NSString *username;
@property (readonly) NSMutableData *password;
@property (readonly) NSString *token_type;
@property (readonly) NSNumber *expires_in;
@property (readonly) NSNumber *refresh_token_expires_in;
@property (readonly) NSDate *expires_on;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *id_token;
@property (readonly) NSDictionary *allData;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)password;
- (id)client_id;
- (id)nonce;
- (id)use;
- (id)scope;
- (id)username;
- (id)assertion;
- (id)exp;
- (id)sub;
- (id)initWithJWTData:(id)a0;
- (void)zeroPassword;
- (id)aud;
- (id)audArray;
- (id)azp;
- (id)iss;
- (id)iat;
- (id)nbf;
- (id)request_nonce;
- (id)grant_type;
- (id)token_type;
- (id)expires_in;
- (id)refresh_token_expires_in;
- (id)expires_on;
- (id)refresh_token;
- (id)id_token;

@end

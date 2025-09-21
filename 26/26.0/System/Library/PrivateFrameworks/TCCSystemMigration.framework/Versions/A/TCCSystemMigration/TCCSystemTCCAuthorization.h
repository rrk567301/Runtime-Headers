@class NSString;

@interface TCCSystemTCCAuthorization : NSObject

@property (retain, nonatomic) NSString *authorizationIdentity;
@property (nonatomic) unsigned long long authorization;
@property (retain, nonatomic) NSString *tccServiceName;
@property (retain, nonatomic) NSString *localizedAppName;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 authorizationIdentitiy:(id)a1 authorization:(unsigned long long)a2;

@end

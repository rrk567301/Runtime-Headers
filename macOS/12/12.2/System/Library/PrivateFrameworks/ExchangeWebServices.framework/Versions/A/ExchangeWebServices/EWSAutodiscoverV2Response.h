@class NSString;

@interface EWSAutodiscoverV2Response : NSObject

@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *authorizationURI;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0 authorizationURI:(id)a1;

@end

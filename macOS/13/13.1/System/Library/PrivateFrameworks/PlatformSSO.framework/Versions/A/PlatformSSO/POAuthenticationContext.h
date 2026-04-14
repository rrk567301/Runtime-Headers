@class NSString, NSURLSession;

@interface POAuthenticationContext : NSObject

@property (retain, nonatomic) NSString *serverNonce;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *apv;
@property (retain, nonatomic) NSURLSession *urlSession;
@property unsigned long long loginType;

- (id)init;
- (void).cxx_destruct;

@end

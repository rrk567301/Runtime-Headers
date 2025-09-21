@class NSString, NSData;

@interface LAAuthenticationSheetControllerPAMConfiguration : NSObject

@property (retain, nonatomic) NSString *pamUsername;
@property (retain, nonatomic) NSString *pamService;
@property (retain, nonatomic) NSData *pamToken;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) NSData *token;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 token:(id)a1 username:(id)a2;

@end

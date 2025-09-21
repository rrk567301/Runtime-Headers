@class NSString;

@interface PhoneNumberCredential : NSObject

@property (readonly, nonatomic) NSString *telURI;
@property (readonly, nonatomic) NSString *credential;
@property (readonly, nonatomic) long long credentialType;

- (void).cxx_destruct;
- (id)initWithTelURI:(id)a0 credential:(id)a1 credentialType:(long long)a2;

@end

@class NSString, NSDictionary, ACAccount, NSNumber;

@interface AAiCloudTermsDisagreeRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL preferPassword;
@property (retain, nonatomic) NSDictionary *additionalHeaders;
@property (retain, nonatomic) NSNumber *slaVersion;
@property (copy, nonatomic) NSString *serverInfo;

+ (Class)responseClass;

- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;
- (void).cxx_destruct;

@end

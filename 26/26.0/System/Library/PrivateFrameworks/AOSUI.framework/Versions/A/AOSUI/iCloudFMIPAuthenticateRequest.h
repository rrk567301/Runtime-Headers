@class NSString;

@interface iCloudFMIPAuthenticateRequest : NSObject {
    NSString *_accountID;
}

+ (Class)responseClass;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)urlRequestWithPassword:(id)a0;

@end

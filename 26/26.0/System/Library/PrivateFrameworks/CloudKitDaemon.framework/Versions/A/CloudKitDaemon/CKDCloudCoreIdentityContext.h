@class NSUUID, CKDAccount, NSString;
@protocol CKDPCSIdentityChangeWatcher;

@interface CKDCloudCoreIdentityContext : NSObject

@property (retain, nonatomic) NSUUID *token;
@property (retain, nonatomic) CKDAccount *account;
@property (copy, nonatomic) NSString *service;
@property (weak, nonatomic) id<CKDPCSIdentityChangeWatcher> delegate;

- (void).cxx_destruct;
- (id)initWithWatcher:(id)a0 service:(id)a1 account:(id)a2;

@end

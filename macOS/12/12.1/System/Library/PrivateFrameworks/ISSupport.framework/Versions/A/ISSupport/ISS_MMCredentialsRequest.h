@class ISS_MMMemberAccount;

@interface ISS_MMCredentialsRequest : ISS_AYOperation {
    ISS_MMMemberAccount *_account;
}

- (void)dealloc;
- (void)dispatch;
- (id)initWithMemberAccount:(id)a0;

@end

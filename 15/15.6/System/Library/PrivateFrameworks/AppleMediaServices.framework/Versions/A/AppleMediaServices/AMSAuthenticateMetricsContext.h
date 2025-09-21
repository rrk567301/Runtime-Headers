@class NSError, ACAccount, AMSAuthenticateOptions;

@interface AMSAuthenticateMetricsContext : NSObject

@property (retain) ACAccount *account;
@property (retain) NSError *error;
@property char isServerRequested;
@property (retain) AMSAuthenticateOptions *options;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 account:(id)a1;

@end

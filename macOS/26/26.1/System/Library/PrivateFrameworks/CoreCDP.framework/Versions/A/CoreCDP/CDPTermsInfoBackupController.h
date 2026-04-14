@class CDPDaemonConnection;

@interface CDPTermsInfoBackupController : NSObject

@property (retain, nonatomic) CDPDaemonConnection *daemonConn;

- (void)saveTermsAcceptance:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchTermsAcceptanceForAccount:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end

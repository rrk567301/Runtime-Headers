@class WBSCoalescedAsynchronousWriter, NSMutableDictionary;

@interface WBSCertificateBypassManager : NSObject {
    NSMutableDictionary *_bypassedHostsToCertificateExceptions;
    NSMutableDictionary *_bypassedHostsToCertificateExceptionsInPrivateBrowsing;
    WBSCoalescedAsynchronousWriter *_plistWriter;
}

@property (class, readonly, nonatomic) WBSCertificateBypassManager *sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (id)_readStateFromStorage;
- (BOOL)_didCertificatExceptionsApplySuccessfully:(id)a0 protectionSpace:(id)a1;
- (id)_hostAndPortForProtectionSpace:(id)a0;
- (void)_clearBypassesInRelationToDate:(id)a0 comparison:(long long)a1;
- (BOOL)didInvalidCertificateExceptionsApplySuccessfullyForProtectionSpace:(id)a0 inPrivateBrowsing:(BOOL)a1;
- (void)rememberCertificateBypassForProtectionSpace:(id)a0 inPrivateBrowsing:(BOOL)a1;
- (void)clearCertificateBypassesCreatedBeforeDate:(id)a0;
- (void)clearCertificateBypassesCreatedAfterDate:(id)a0;
- (void)clearAllCertificateBypasses;

@end

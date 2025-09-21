@class NSString, NSFileHandle, NSURL, BMFileBackedDictionary;

@interface CSAppEntityCascadeLedger : NSObject {
    BMFileBackedDictionary *_dictionary;
    NSFileHandle *_fileLockHandle;
    NSURL *_directory;
    BOOL _released;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long journalUpdateAttempts;
@property (readonly, nonatomic) unsigned long long fullSetDonationAttempts;

+ (id)_loadLedgerFileInDirectory:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
+ (id)_acquireLockFileInDirectory:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
+ (id)_lockFileURLWithDirectory:(id)a0 bundleIdentifier:(id)a1;
+ (void)deleteLedgerFilesInDirectory:(id)a0 notContainedInActiveBundles:(id)a1;

- (void)dealloc;
- (unsigned short)_options;
- (unsigned long long)version;
- (id)description;
- (void)releaseLock;
- (unsigned long long)failureCount;
- (void).cxx_destruct;
- (id)_boxedVersion:(unsigned long long)a0;
- (id)initWithDirectory:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (BOOL)isInitialFullDonationRequired;
- (BOOL)isRecoveryFullDonationRequired;
- (BOOL)resetLedger:(id *)a0;
- (unsigned long long)_fullSetDonationAttemptCount;
- (unsigned long long)_journalUpdateAttemptCount;
- (void)_releaseLock:(BOOL)a0;
- (void)attemptFullSetDonation;
- (void)attemptJournalUpdate;
- (void)completeFullSetDonationWithVersion:(unsigned long long)a0;
- (void)completeJournalUpdate;
- (void)incrementVersion;
- (void)resetJournalUpdateAttempts;

@end

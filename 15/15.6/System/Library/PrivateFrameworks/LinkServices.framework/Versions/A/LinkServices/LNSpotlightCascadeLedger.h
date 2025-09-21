@class NSString, NSURL, BMFileBackedDictionary;

@interface LNSpotlightCascadeLedger : NSObject {
    BMFileBackedDictionary *_dictionary;
    NSURL *_directory;
    char _deleted;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (id)_loadLedgerFileInDirectory:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)version;
- (unsigned short)_options;
- (id)_boxedVersion:(unsigned long long)a0;
- (char)_isDeleted;
- (char)abandonDonationType:(unsigned char)a0 error:(id *)a1;
- (char)attemptDonationType:(unsigned char)a0 error:(id *)a1;
- (char)completeDonationType:(unsigned char)a0 version:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)countAttemptsOfDonationType:(unsigned char)a0;
- (char)deferAttemptOfDonationType:(unsigned char)a0 error:(id *)a1;
- (char)deleteLedger:(id *)a0;
- (id)initWithDirectory:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (char)isInitialFullDonationRequired;
- (char)isRecoveryFullDonationRequired;
- (char)resetLedger:(id *)a0;

@end

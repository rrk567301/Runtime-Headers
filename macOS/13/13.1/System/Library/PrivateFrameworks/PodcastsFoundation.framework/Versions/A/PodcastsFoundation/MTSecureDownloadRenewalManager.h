@interface MTSecureDownloadRenewalManager : NSObject {
    void /* unknown type, empty encoding */ secureKeyLoader;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ removalLock;
    void /* unknown type, empty encoding */ renewalLock;
}

+ (id)inContextKeyDataFor:(long long)a0 ctx:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)renewKeysAndRemoveExpiredDownloads;
- (void)requestSecureDeletionOfOrphanedKeys;
- (void)requestSecureDeletionOf:(long long)a0;
- (void)renewKeysAndRemoveExpiredDownloadsWithUrlProtocolDelegate:(id)a0;

@end

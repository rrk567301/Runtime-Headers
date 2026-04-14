@interface IMCoreSpotlightUtilities : NSObject

+ (BOOL)verboseLoggingEnabled;
+ (BOOL)needsIndexing;
+ (BOOL)needsDonation;
+ (BOOL)needsInitialDonation;
+ (void)setNeedsInitialDonation:(BOOL)a0;
+ (BOOL)needsDeferredIndexing;
+ (void)setNeedsDeferredIndexing;
+ (unsigned long long)lastIndexedRowID;
+ (unsigned long long)lastDonatedRowID;
+ (unsigned long long)currentIndexVersion;
+ (unsigned long long)expectedIndexVersion;
+ (id)currentIndexProductVersion;
+ (id)expectedIndexProductVersion;
+ (unsigned long long)messageIndexBatchSize:(BOOL)a0;
+ (BOOL)bypassIndexVersionCheck;
+ (id)descriptionForReindexReason:(unsigned long long)a0;

@end

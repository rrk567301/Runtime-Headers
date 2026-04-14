@interface IMCoreSpotlightUtilities : NSObject

+ (BOOL)verboseLoggingEnabled;
+ (BOOL)bypassIndexVersionCheck;
+ (id)currentIndexProductVersion;
+ (unsigned long long)currentIndexVersion;
+ (id)deferredReindexingGUIDs;
+ (id)descriptionForReindexReason:(unsigned long long)a0;
+ (id)expectedIndexProductVersion;
+ (unsigned long long)expectedIndexVersion;
+ (unsigned long long)lastDonatedRowID;
+ (unsigned long long)lastIndexedRowID;
+ (void)markDeferredReindexingCompletedForGUIDs:(id)a0;
+ (unsigned long long)messageIndexBatchSize:(BOOL)a0;
+ (BOOL)needsDeferredIndexing;
+ (BOOL)needsDonation;
+ (BOOL)needsIndexing;
+ (BOOL)needsInitialDonation;
+ (void)setDeferredReindexingGUIDs:(id)a0;
+ (void)setNeedsDeferredIndexing;
+ (void)setNeedsDeferredReindexingForGUIDs:(id)a0;
+ (void)setNeedsInitialDonation:(BOOL)a0;
+ (BOOL)skipIndexing;

@end

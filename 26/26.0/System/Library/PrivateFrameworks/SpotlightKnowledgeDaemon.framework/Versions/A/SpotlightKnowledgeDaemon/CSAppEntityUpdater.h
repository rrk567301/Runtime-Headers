@class LNSpotlightCascadeTranslator, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CSAppEntityUpdater : NSObject <CSEventListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    LNSpotlightCascadeTranslator *_translator;
    NSURL *_ledgerDirectory;
}

+ (id)sharedInstance;
+ (BOOL)isCascadeDonationEnabled;

- (int)eventType;
- (id)config;
- (id)init;
- (id)description;
- (unsigned long long)eventFlags;
- (void).cxx_destruct;
- (id)taskName;
- (id)_disabledTypeIdentifiersClause:(id)a0;
- (void)_donateToCascadeWithReason:(unsigned char)a0 ledger:(id)a1 donation:(id)a2 deletion:(id)a3 completion:(id /* block */)a4;
- (id)_allBundlesApplicableToCascade;
- (id)_allExistentSetsNotContainedInSpotlightBundles:(id)a0;
- (id)_countAppEntitiesFromBundle:(id)a0;
- (void)_donateJournalUpdateWithRecursiveRetry:(unsigned long long)a0 donation:(id)a1 deletion:(id)a2 ledger:(id)a3 cancelBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (long long)_handleFullCascadeDonation:(id)a0 withReason:(unsigned char)a1 ledger:(id)a2 error:(id *)a3;
- (long long)_handleIncrementalCascadeDonation:(id)a0 withReason:(unsigned char)a1 ledger:(id)a2 donation:(id)a3 deletion:(id)a4 error:(id *)a5;
- (BOOL)_handleJournalUpdateWithDonation:(id)a0 orDeletion:(id)a1 cancelBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_recursivelyCleanupDeletedSets:(id)a0 withIndex:(unsigned long long)a1 cancelBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_recursivelyDonateNowForAllBundles:(id)a0 withIndex:(unsigned long long)a1 cancelBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_recursivelyVerifyAllBundles:(id)a0 withIndex:(unsigned long long)a1 cancelBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)_skipRetryForErrorCode:(long long)a0;
- (void)didCompleteJournal;
- (id)excludeBundleIDs;
- (BOOL)handleDeletion:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (void)handleDonateNowNotification:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)handleDonation:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)includeBundleIDs;
- (id)initWithQueue:(id)a0 directory:(id)a1;
- (BOOL)isAcceptingJournals;
- (void)runNightlyVerification:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldHandleJournalItem:(id)a0 bundleID:(id)a1;
- (BOOL)supportsCSIndexType:(int)a0;

@end

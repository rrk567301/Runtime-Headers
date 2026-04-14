@class NSObject, CSEventListenerConfig, SpotlightReceiverConfig;
@protocol OS_dispatch_queue;

@interface CSScheduledReceiverUpdater : NSObject <CSEventListenerDelegate> {
    SpotlightReceiverConfig *_config;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_timerQueue;
}

@property (readonly, nonatomic) CSEventListenerConfig *taskConfig;

- (int)eventType;
- (id)config;
- (id)description;
- (unsigned long long)eventFlags;
- (void).cxx_destruct;
- (id)taskName;
- (void)didCompleteJournal;
- (id)excludeBundleIDs;
- (BOOL)handleDeletion:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)handleDonation:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)includeBundleIDs;
- (id)initWithSpotlightReceiverConfig:(id)a0;
- (BOOL)isAcceptingJournals;
- (id)receiverConfig;
- (BOOL)shouldHandleJournalItem:(id)a0 bundleID:(id)a1;
- (BOOL)supportedJournalItem:(id)a0;
- (BOOL)supportsCSIndexType:(int)a0;

@end

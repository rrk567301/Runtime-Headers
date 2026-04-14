@class SKDJournalProcessingJob, CSEventListenerConfig;

@interface CSProcessorPipelineJobUpdater : NSObject <CSEventListenerDelegate> {
    SKDJournalProcessingJob *_job;
}

@property (readonly, nonatomic) CSEventListenerConfig *taskConfig;

- (int)eventType;
- (unsigned long long)eventFlags;
- (id)config;
- (void).cxx_destruct;
- (id)description;
- (id)taskName;
- (void)didCompleteJournal;
- (id)excludeBundleIDs;
- (id)excludeContentTypes;
- (BOOL)handleDeletion:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)handleDonation:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)includeBundleIDs;
- (id)includeContentTypes;
- (id)initWithJournalJob:(id)a0;
- (BOOL)isAcceptingJournals;
- (BOOL)shouldHandleJournalItem:(id)a0 bundleID:(id)a1;
- (BOOL)supportsCSIndexType:(unsigned int)a0;

@end

@class SKDJournalProcessingJob, CSEventListenerConfig;

@interface CSProcessorPipelineJobUpdater : NSObject <CSEventListenerDelegate> {
    SKDJournalProcessingJob *_job;
}

@property (readonly, nonatomic) CSEventListenerConfig *taskConfig;

- (int)eventType;
- (id)config;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)eventFlags;
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

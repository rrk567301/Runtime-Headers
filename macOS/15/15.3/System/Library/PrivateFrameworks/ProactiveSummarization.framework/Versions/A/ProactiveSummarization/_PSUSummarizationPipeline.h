@interface _PSUSummarizationPipeline : NSObject {
    void /* unknown type, empty encoding */ summarizationManager;
    void /* unknown type, empty encoding */ smartRepliesManager;
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ summarizer;
    void /* unknown type, empty encoding */ urgencyClassifier;
    void /* unknown type, empty encoding */ spotlightReader;
    void /* unknown type, empty encoding */ spotlightWriter;
    void /* unknown type, empty encoding */ userActivityConversationDetector;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ smartRepliesPrecomputationDatabase;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ guardedData;
    void /* unknown type, empty encoding */ messageSummariesDeletionTimer;
    void /* unknown type, empty encoding */ mailUrgencyContextProducer;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (void)handleDeletionOfItemsWithIdentifiers:(id)a0 bundleIdentifier:(id)a1;
- (void)processItem:(id)a0;

@end

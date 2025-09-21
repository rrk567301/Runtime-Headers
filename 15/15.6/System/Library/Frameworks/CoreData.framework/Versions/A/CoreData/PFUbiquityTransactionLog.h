@class NSRecursiveLock, NSString, NSMutableDictionary, PFUbiquityLocation, PFUbiquityKnowledgeVector, PFUbiquitySaveSnapshot;

@interface PFUbiquityTransactionLog : NSObject {
    NSMutableDictionary *_contents;
    int _transactionLogType;
    char _useTemporaryLogLocation;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityLocation *_temporaryTransactionLogLocation;
    PFUbiquityLocation *_stagingTransactionLogLocation;
    NSString *_fileProtectionOption;
    char _inTemporaryLocation;
    char _inStagingLocation;
    char _inPermanentLocation;
    PFUbiquityKnowledgeVector *_knowledgeVector;
    PFUbiquitySaveSnapshot *_saveSnapshot;
    NSString *_localPeerID;
    char _loadUsingRetry;
    char _loadedComparisonMetadata;
    char _loadedImportMetadata;
    char _loadedInsertedObjectData;
    char _loadedUpdatedObjectData;
    char _loadedDeletedObjectData;
    char _loadedContents;
    NSRecursiveLock *_contentsLock;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithStoreName:(id)a0 andSaveSnapshot:(id)a1 andRootLocation:(id)a2;
- (id)initWithTransactionLogLocation:(id)a0 andLocalPeerID:(id)a1;
- (id)initWithTransactionLogURL:(id)a0 ubiquityRootLocation:(id)a1 andLocalPeerID:(id)a2;

@end

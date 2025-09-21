@class NSMutableDictionary, NSMutableArray;

@interface PFUbiquityPeerSnapshotCollection : NSObject {
    NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;
    NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary *_kvToSnapshot;
    NSMutableArray *_peerSnapshots;
    char _needSort;
}

- (void)dealloc;
- (id)init;

@end

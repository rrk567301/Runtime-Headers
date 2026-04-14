@class NSString, NSMutableDictionary, NSDate;

@interface PFUbiquitySaveSnapshot : NSObject {
    NSDate *_transactionDate;
    NSString *_modelVersionHash;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
}

- (void)dealloc;
- (id)description;
- (id)initWithTransactionLog:(id)a0;
- (id)initWithSaveNotification:(id)a0 withLocalPeerID:(id)a1;

@end

@class NSString, CKRecordID, NSArray, NSDate, NTPBPrivateRecordSyncState;
@protocol FCPrivateRecordSyncManagerDelegate;

@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager> {
    CKRecordID *_recordID;
    id<FCPrivateRecordSyncManagerDelegate> _delegate;
    NSArray *_desiredKeys;
    NTPBPrivateRecordSyncState *_currentState;
}

@property (readonly, nonatomic) NSDate *lastCleanDate;
@property (readonly, nonatomic) NSDate *lastDirtyDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)fetchChangesWithContext:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)isAwaitingFirstSync;
- (void).cxx_destruct;
- (void)markAsDirty;
- (void)notifyObservers;
- (id)init;
- (BOOL)isCleanUpToDate:(id)a0;

@end

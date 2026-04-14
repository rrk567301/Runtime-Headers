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
- (void)markAsDirty;
- (id)init;
- (void)notifyObservers;
- (BOOL)isAwaitingFirstSync;
- (BOOL)isCleanUpToDate:(id)a0;
- (void).cxx_destruct;
- (void)fetchChangesWithContext:(id)a0 qualityOfService:(long long)a1 completionHandler:(id /* block */)a2;

@end

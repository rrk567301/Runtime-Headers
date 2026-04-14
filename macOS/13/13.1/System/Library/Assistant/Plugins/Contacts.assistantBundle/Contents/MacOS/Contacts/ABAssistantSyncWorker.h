@class NSString, NSObject;
@protocol ABAssistantSyncDelegate, OS_xpc_object;

@interface ABAssistantSyncWorker : NSObject <AFSyncHandler> {
    id<ABAssistantSyncDelegate> _delegate;
    struct __CFArray { } *_allRecords;
    struct __CFArray { } *_changedIDs;
    struct __CFArray { } *_changeTypes;
    struct __CFArray { } *_sequenceNumbers;
    long long _syncIndex;
    long long _syncCount;
    BOOL _addressBookNeedsSave;
    NSObject<OS_xpc_object> *_abServiceConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)sendSynchronousMessage:(id)a0;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 forKey:(id)a2 beginInfo:(id)a3;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (id)currentSyncSnapshot;
- (void)clearSyncCache;
- (id)getCurrentValidity;
- (id)abServiceConnection;
- (long long)currentSequenceNumber;
- (void)changesSinceSequenceNumber:(long long)a0 changedIDs:(const struct __CFArray **)a1 changeTypes:(const struct __CFArray **)a2 sequenceNumbers:(const struct __CFArray **)a3;
- (void)clearRecordsSinceSequenceNumber:(long long)a0;
- (void)setFullSnapshotSequenceNumber:(long long)a0;
- (long long)fullSnapshotSequenceNumber;
- (void)updateSyncAnchorIfNecessary;
- (id)_saDomainObjectWithReadactMeCard:(id)a0;

@end

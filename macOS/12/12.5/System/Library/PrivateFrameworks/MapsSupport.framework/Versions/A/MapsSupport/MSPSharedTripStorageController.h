@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSession;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeSession:(id)a0;
- (id)groupSessionInfoForKey:(id)a0;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)receivingRulesTouched;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (void)_loadSenderSession;
- (void)_loadStoredSessions;
- (void)_saveSenderSession;
- (void)_saveStoredSessions;
- (void)_saveReceivingRules;
- (void)_saveSendingRules;
- (id)_storingPath;
- (id)_rulesPath;
- (id)_senderRulesPath;
- (id)_storingSenderPath;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)sendingRulesTouched;

@end

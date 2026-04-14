@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSession;

+ (id)_receivedSessionsPath;
+ (id)_receivedNotificationRulesPath;
+ (id)_senderSessionPath;
+ (id)_sentNotificationRulesPath;
+ (void)removeFilesFromBackupsIfNeeded;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeSession:(id)a0;
- (id)groupSessionInfoForKey:(id)a0;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)receivingRulesTouched;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)sendingRulesTouched;
- (void)_loadStoredSessions;
- (void)_saveStoredSessions;
- (void)_saveReceivingRules;
- (void)_loadSenderSession;
- (void)_saveSenderSession;
- (void)_saveSendingRules;

@end

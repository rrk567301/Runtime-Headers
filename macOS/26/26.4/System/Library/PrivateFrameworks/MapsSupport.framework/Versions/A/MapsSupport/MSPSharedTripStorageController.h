@class NSMutableDictionary, MSPGroupSessionStorage;
@protocol MSPSharedTripStorageDelegate;

@interface MSPSharedTripStorageController : NSObject {
    BOOL _initalisedStoredSessions;
}

@property (retain, nonatomic) NSMutableDictionary *sharedTripGroupSessionInfo;
@property (retain, nonatomic) NSMutableDictionary *receiverRules;
@property (retain, nonatomic) NSMutableDictionary *senderRules;
@property (weak, nonatomic) id<MSPSharedTripStorageDelegate> delegate;
@property (retain, nonatomic) MSPGroupSessionStorage *senderSessionStorage;

+ (id)_receivedNotificationRulesPath;
+ (id)_receivedSessionsPath;
+ (id)_senderSessionStoragePath;
+ (id)_sentNotificationRulesPath;
+ (void)removeFilesFromBackupsIfNeeded;

- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (id)_identifiersOfStaleSessions:(id)a0;
- (void)_saveSendingRules;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)_saveStoredSessions;
- (id)groupSessionInfoForKey:(id)a0;
- (void).cxx_destruct;
- (void)initialiseStoredSessionsIfNeeded;
- (void)_loadStoredSessions;
- (id)init;
- (void)removeSession:(id)a0;
- (void)sendingRulesTouched;
- (void)_saveReceivingRules;
- (void)_loadSenderSession;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)dealloc;
- (void)_saveSenderSession;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (void)receivingRulesTouched;

@end

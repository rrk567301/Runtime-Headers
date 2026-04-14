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

- (id)_identifiersOfStaleSessions:(id)a0;
- (void)_saveSenderSession;
- (void)addNewSession:(id)a0 originator:(id)a1 receivingHandle:(id)a2 receivingAccountIdentifier:(id)a3;
- (void)updateGroupSessionStorageWithState:(id)a0;
- (void)removeSession:(id)a0;
- (void)sendingRulesTouched;
- (void)receivingRulesTouched;
- (id)init;
- (void)_loadSenderSession;
- (void)_saveStoredSessions;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sendingRulesForIdentifier:(id)a0;
- (void)_loadStoredSessions;
- (void)_saveReceivingRules;
- (void)initialiseStoredSessionsIfNeeded;
- (id)receivingRulesForIdentifier:(id)a0;
- (void)_saveSendingRules;
- (id)groupSessionInfoForKey:(id)a0;

@end

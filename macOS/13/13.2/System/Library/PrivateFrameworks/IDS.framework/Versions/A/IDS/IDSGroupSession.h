@class NSString, NSSet, _IDSGroupSession;

@interface IDSGroupSession : NSObject {
    _IDSGroupSession *_internal;
}

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) unsigned int sessionEndedReason;
@property (readonly, nonatomic) NSSet *requiredCapabilities;
@property (readonly, nonatomic) NSSet *requiredLackOfCapabilities;

+ (void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)requestNWConnectionWithDataBlob:(id)a0 completionHandler:(id /* block */)a1;
+ (id)augmentNetworkParametersForSession:(id)a0 participantID:(unsigned long long)a1 parameters:(id)a2;
+ (id)augmentNetworkParametersForSessionAlias:(id)a0 participantIDAlias:(unsigned long long)a1 salt:(id)a2 parameters:(id)a3;
+ (id)createEndpointForSessionIDAlias:(id)a0 topic:(id)a1 participantIDAlias:(unsigned long long)a2 salt:(id)a3;
+ (id)createGroupDescriptorForSessionIDAlias:(id)a0 topic:(id)a1 salt:(id)a2;
+ (void)augmentConnectionGroupNetworkParameters:(id)a0;
+ (id)keyValueDeliveryForSessionID:(id)a0;
+ (void)requestNWConnectionforIDSGroupSessionBroadcastParameter:(id)a0 withCompletionHandler:(id /* block */)a1;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (unsigned int)state;
- (id)_internal;
- (void)setPreferences:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)initWithAccount:(id)a0 destinations:(id)a1 options:(id)a2;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)_internal_sessionWithValidityCheck;
- (id)sessionIDAliasWithSalt:(id)a0;
- (unsigned long long)createAliasForParticipantID:(unsigned long long)a0 salt:(id)a1;
- (unsigned long long)createAliasForLocalParticipantIDWithSalt:(id)a0;
- (unsigned long long)participantIDForAlias:(unsigned long long)a0 salt:(id)a1;
- (void)createSessionIDAliasWithSalt:(id)a0 completionHandler:(id /* block */)a1;
- (void)createAliasForParticipantID:(unsigned long long)a0 salt:(id)a1 completionHandler:(id /* block */)a2;
- (void)createAliasForLocalParticipantIDWithSalt:(id)a0 completionHandler:(id /* block */)a1;
- (void)getParticipantIDForAlias:(unsigned long long)a0 salt:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateMembers:(id)a0 withContext:(id)a1 triggeredLocally:(BOOL)a2;
- (void)updateMembers:(id)a0 withContext:(id)a1 messagingCapabilities:(id)a2 triggeredLocally:(BOOL)a3;
- (void)manageDesignatedMembers:(id)a0 withType:(unsigned short)a1;
- (void)removeParticipants:(id)a0;
- (void)updateParticipantData:(id)a0 withContext:(id)a1;
- (void)setParticipantInfo:(id)a0;
- (void)updateParticipantType:(unsigned short)a0 members:(id)a1 withContext:(id)a2 triggeredLocally:(BOOL)a3;
- (void)joinWithOptions:(id)a0;
- (void)leaveGroupSession;
- (void)leaveGroupSessionWithOptions:(id)a0;
- (void)reconnectUPlusOneSession;
- (void)setRequiredCapabilities:(id)a0 requiredLackOfCapabilities:(id)a1;
- (void)requestActiveParticipants;
- (void)requestDataBlobForParticipantIDs:(id)a0;
- (void)registerPluginWithOptions:(id)a0;
- (void)unregisterPluginWithOptions:(id)a0;
- (void)requestURIsForParticipantIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)unicastParameterForParticipantID:(unsigned long long)a0 dataMode:(long long)a1 connectionIndex:(unsigned long long)a2;
- (id)unicastParameterForParticipantIDAlias:(unsigned long long)a0 salt:(id)a1 dataMode:(long long)a2 connectionIndex:(unsigned long long)a3;
- (id)unicastConnectorWithDataMode:(long long)a0;
- (void)requestDataCryptorForTopic:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestEncryptionKeyForParticipants:(id)a0;
- (id)keyValueDelivery;
- (id)broadcastParameterForService:(id)a0;

@end

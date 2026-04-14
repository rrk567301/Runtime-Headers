@class NSXPCConnection;

@interface UAResumableActivitiesControlManager : NSObject {
    int _pid;
}

@property (retain) NSXPCConnection *connection;
@property (readonly) int serverPID;
@property id delegate;
@property int recordingPath;

+ (id)resumableActivitiesControlManager;

- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (id)status;
- (id)matchingUUIDForString:(id)a0;
- (id)advertisedItemUUID;
- (id)allUUIDsOfType:(unsigned long long)a0;
- (id)enabledUUIDs;
- (id)currentAdvertisedItemUUID;
- (id)debuggingInfo;
- (id)dynamicUserActivities;
- (id)recentActions:(BOOL)a0;
- (id)simulatorStatus;
- (id)status:(id)a0 options:(id)a1;
- (void)fetchMoreAppSuggestions;
- (id)defaults:(BOOL)a0;
- (void)setDefault:(id)a0 value:(id)a1;
- (void)restartServer;
- (void)terminateServer;
- (void)setDebugOption:(id)a0 value:(id)a1;
- (void)injectBTLEItem:(id)a0 type:(unsigned long long)a1 identifier:(id)a2 title:(id)a3 activityPayload:(id)a4 webPageURL:(id)a5 remoteModel:(id)a6 duration:(double)a7 payloadDelay:(double)a8;
- (void)callWillSaveDelegate:(id)a0;
- (void)callWillSaveDelegate:(id)a0 completionHandler:(id /* block */)a1;
- (void)callDidSaveDelegate:(id)a0;
- (void)connectToRemote:(id)a0 port:(long long)a1;
- (void)rendevous:(id)a0 domain:(id)a1 active:(BOOL)a2;
- (void)peerDevices:(id)a0 completionHandler:(id /* block */)a1;
- (id)getSysdiagnoseStringsIncludingPrivateData:(BOOL)a0;
- (void)replayCommands:(id)a0 completionHandler:(id /* block */)a1;
- (void)setLocalReflect:(BOOL)a0;
- (BOOL)getAdvertisedBytes:(id)a0 completionHandler:(id /* block */)a1;

@end

@class NSString, NSArray;

@interface BMPostSiriEngagementEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *UISessionID;
@property (readonly, nonatomic) NSString *taskID;
@property (readonly, nonatomic) NSString *taskType;
@property (readonly, nonatomic) NSString *conversationPath;
@property (nonatomic) char hasTaskSuccess;
@property (readonly, nonatomic) int taskSuccess;
@property (nonatomic) char hasIsUserAbandoned;
@property (readonly, nonatomic) char isUserAbandoned;
@property (nonatomic) char hasIsUserCancelled;
@property (readonly, nonatomic) char isUserCancelled;
@property (readonly, nonatomic) NSArray *pseEvents;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (id)initWithUISessionID:(id)a0 taskID:(id)a1 taskType:(id)a2 conversationPath:(id)a3 taskSuccess:(int)a4 isUserAbandoned:(char)a5 isUserCancelled:(char)a6 pseEvents:(id)a7;
- (id)initWithUISessionId:(id)a0 domain:(id)a1 action:(id)a2 isPostSiriEngagement:(char)a3 pseDeltaDuration:(double)a4 pseDeltaSinceUIStart:(double)a5 pseDeltaSinceUIEnd:(double)a6 pseContents:(id)a7;

@end

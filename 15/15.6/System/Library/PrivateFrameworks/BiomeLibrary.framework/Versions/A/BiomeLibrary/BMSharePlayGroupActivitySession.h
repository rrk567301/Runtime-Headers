@class NSString, NSArray;

@interface BMSharePlayGroupActivitySession : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char isActive;
@property (nonatomic) char hasIsActive;
@property (readonly, nonatomic) NSString *sourceBundleID;
@property (readonly, nonatomic) NSString *activitySessionID;
@property (readonly, nonatomic) NSString *activityID;
@property (readonly, nonatomic) NSString *messagesChatGUID;
@property (readonly, nonatomic) NSString *experienceType;
@property (readonly, nonatomic) NSArray *participantHandles;
@property (readonly, nonatomic) NSArray *memberHandles;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_memberHandlesJSONArray;
- (id)_participantHandlesJSONArray;
- (id)initWithIsActive:(id)a0 sourceBundleID:(id)a1 activitySessionID:(id)a2 activityID:(id)a3 messagesChatGUID:(id)a4 experienceType:(id)a5 participantHandles:(id)a6 memberHandles:(id)a7;

@end

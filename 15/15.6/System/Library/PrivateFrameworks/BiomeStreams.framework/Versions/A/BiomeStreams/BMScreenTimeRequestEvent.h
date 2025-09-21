@class NSString;

@interface BMScreenTimeRequestEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) int kind;
@property (nonatomic) int status;
@property (nonatomic) double eventTime;
@property (nonatomic) int approvalTime;
@property (copy, nonatomic) NSString *requesterDSID;
@property (copy, nonatomic) NSString *responderDSID;
@property (copy, nonatomic) NSString *websitePath;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) char isActionUserDevice;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithRequestID:(id)a0 kind:(int)a1 status:(int)a2 eventTime:(double)a3 approvalTime:(int)a4 requesterDSID:(id)a5 responderDSID:(id)a6 websitePath:(id)a7 bundleID:(id)a8;
- (id)initWithRequestID:(id)a0 kind:(int)a1 status:(int)a2 eventTime:(double)a3 approvalTime:(int)a4 requesterDSID:(id)a5 responderDSID:(id)a6 websitePath:(id)a7 bundleID:(id)a8 isActionUserDevice:(char)a9;
- (char)validNonOptionalProperty:(id)a0 propertyName:(id)a1;

@end

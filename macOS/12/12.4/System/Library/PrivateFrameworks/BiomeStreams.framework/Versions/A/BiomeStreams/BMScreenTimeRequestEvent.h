@class NSString;

@interface BMScreenTimeRequestEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) int kind;
@property (nonatomic) int status;
@property (nonatomic) double eventTime;
@property (nonatomic) int approvalTime;
@property (copy, nonatomic) NSString *requesterDSID;
@property (copy, nonatomic) NSString *responderDSID;
@property (copy, nonatomic) NSString *websitePath;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)serialize;
- (id)jsonDict;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProto:(id)a0;
- (BOOL)validNonOptionalProperty:(id)a0 propertyName:(id)a1;
- (id)initWithRequestID:(id)a0 kind:(int)a1 status:(int)a2 eventTime:(double)a3 approvalTime:(int)a4 requesterDSID:(id)a5 responderDSID:(id)a6 websitePath:(id)a7 bundleID:(id)a8;

@end

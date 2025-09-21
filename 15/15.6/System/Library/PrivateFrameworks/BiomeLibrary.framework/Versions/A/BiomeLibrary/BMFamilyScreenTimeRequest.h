@class NSString, NSDate;

@interface BMFamilyScreenTimeRequest : BMEventBase <BMStoreData> {
    char _hasRaw_eventTime;
    double _raw_eventTime;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, nonatomic) NSString *requesterDSID;
@property (readonly, nonatomic) NSString *responderDSID;
@property (readonly, nonatomic) int requestKind;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) int approvalTime;
@property (readonly, nonatomic) NSString *websitePath;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) char isActionUserDevice;
@property (nonatomic) char hasIsActionUserDevice;
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
- (id)initWithRequestID:(id)a0 eventTime:(id)a1 requesterDSID:(id)a2 responderDSID:(id)a3 requestKind:(int)a4 status:(int)a5 approvalTime:(int)a6 websitePath:(id)a7 bundleID:(id)a8 isActionUserDevice:(id)a9;

@end

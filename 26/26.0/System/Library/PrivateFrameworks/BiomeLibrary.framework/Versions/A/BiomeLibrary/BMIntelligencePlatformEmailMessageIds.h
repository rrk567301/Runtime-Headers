@class NSString, NSUUID, NSData, NSDate;

@interface BMIntelligencePlatformEmailMessageIds : BMEventBase <BMStoreData> {
    BOOL _hasRaw_creationTimeStamp;
    double _raw_creationTimeStamp;
    NSData *_raw_messageUUID;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *creationTimeStamp;
@property (readonly, nonatomic) NSString *classifierType;
@property (readonly, nonatomic) NSUUID *messageUUID;
@property (readonly, nonatomic) int messageSourceType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCreationTimeStamp:(id)a0 classifierType:(id)a1 messageUUID:(id)a2 messageSourceType:(int)a3;

@end

@class NSString, NSDate;

@interface BMLighthouseTaskStatusPushMetadata : BMEventBase <BMStoreData> {
    BOOL _hasRaw_creationDate;
    double _raw_creationDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *pushType;
@property (readonly, nonatomic) NSString *pushPriority;
@property (readonly, nonatomic) NSDate *creationDate;
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
- (id)initWithTopic:(id)a0 channelID:(id)a1 pushType:(id)a2 pushPriority:(id)a3 creationDate:(id)a4;

@end

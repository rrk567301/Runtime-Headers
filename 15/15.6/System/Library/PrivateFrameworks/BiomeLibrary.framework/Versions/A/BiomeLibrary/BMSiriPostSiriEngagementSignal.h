@class NSString, NSArray, BMSiriPostSiriEngagementSignalDeltaEvent;

@interface BMSiriPostSiriEngagementSignal : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic) char isPostSiriEngagement;
@property (nonatomic) char hasIsPostSiriEngagement;
@property (readonly, nonatomic) BMSiriPostSiriEngagementSignalDeltaEvent *pseDelta;
@property (readonly, nonatomic) NSArray *pseContents;
@property (readonly, nonatomic) double donatedTimestamp;
@property (nonatomic) char hasDonatedTimestamp;
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
- (id)_pseContentsJSONArray;
- (id)initWithDomain:(id)a0 action:(id)a1 isPostSiriEngagement:(id)a2 pseDelta:(id)a3 pseContents:(id)a4 donatedTimestamp:(id)a5;

@end

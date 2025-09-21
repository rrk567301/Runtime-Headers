@class NSString;

@interface BMSiriPostSiriEngagementSignalDeltaEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double duration;
@property (nonatomic) char hasDuration;
@property (readonly, nonatomic) double sinceUIEnd;
@property (nonatomic) char hasSinceUIEnd;
@property (readonly, nonatomic) double sinceUIStart;
@property (nonatomic) char hasSinceUIStart;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithDuration:(id)a0 sinceUIEnd:(id)a1 sinceUIStart:(id)a2;

@end

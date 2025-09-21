@class NSString;

@interface BMSiriPostSiriEngagementSignalDeltaEvent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) double sinceUIEnd;
@property (nonatomic) BOOL hasSinceUIEnd;
@property (readonly, nonatomic) double sinceUIStart;
@property (nonatomic) BOOL hasSinceUIStart;
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
- (id)initWithDuration:(id)a0 sinceUIEnd:(id)a1 sinceUIStart:(id)a2;

@end

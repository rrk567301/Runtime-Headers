@class NSUUID, NSString, NSData, NSDate;

@interface BMSiriUserAggregationId : BMEventBase <BMStoreData> {
    NSData *_raw_aggregationId;
    char _hasRaw_effectiveFrom;
    double _raw_effectiveFrom;
    char _hasRaw_createdOn;
    double _raw_createdOn;
    char _hasRaw_adoptedOn;
    double _raw_adoptedOn;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *aggregationId;
@property (readonly, nonatomic) NSDate *effectiveFrom;
@property (readonly, nonatomic) unsigned int validityDays;
@property (nonatomic) char hasValidityDays;
@property (readonly, nonatomic) NSDate *createdOn;
@property (readonly, nonatomic) NSDate *adoptedOn;
@property (readonly, nonatomic) unsigned int switchedCount;
@property (nonatomic) char hasSwitchedCount;
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
- (id)initWithAggregationId:(id)a0 effectiveFrom:(id)a1 validityDays:(id)a2 createdOn:(id)a3 adoptedOn:(id)a4 switchedCount:(id)a5;

@end

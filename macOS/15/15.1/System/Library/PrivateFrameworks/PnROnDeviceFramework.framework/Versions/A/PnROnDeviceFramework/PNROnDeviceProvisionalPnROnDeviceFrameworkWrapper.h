@class PNROnDeviceProvisionalPnRSiriRequestGrainDebugSummary, NSData, PNROnDeviceProvisionalPnRSiriRequestGrainSummary;

@interface PNROnDeviceProvisionalPnROnDeviceFrameworkWrapper : SISchemaTopLevelUnionType

@property (retain, nonatomic) PNROnDeviceProvisionalPnRSiriRequestGrainSummary *siriRequestGrainMetrics;
@property (nonatomic) BOOL hasSiriRequestGrainMetrics;
@property (retain, nonatomic) PNROnDeviceProvisionalPnRSiriRequestGrainDebugSummary *siriRequestGrainDebugSummary;
@property (nonatomic) BOOL hasSiriRequestGrainDebugSummary;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEventtype;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)getVersion;
- (id)initWithJSON:(id)a0;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)qualifiedMessageName;
- (void)deleteSiriRequestGrainDebugSummary;
- (void)deleteSiriRequestGrainMetrics;

@end

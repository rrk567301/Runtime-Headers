@class NSData;

@interface MHSchemaMHStatisticDistributionInfo : SISchemaInstrumentationMessage {
    struct { unsigned char num : 1; unsigned char max : 1; unsigned char min : 1; unsigned char avg : 1; unsigned char median : 1; unsigned char p95 : 1; unsigned char std : 1; unsigned char warmup : 1; } _has;
}

@property (nonatomic) unsigned int num;
@property (nonatomic) char hasNum;
@property (nonatomic) unsigned long long max;
@property (nonatomic) char hasMax;
@property (nonatomic) unsigned long long min;
@property (nonatomic) char hasMin;
@property (nonatomic) unsigned long long avg;
@property (nonatomic) char hasAvg;
@property (nonatomic) unsigned long long median;
@property (nonatomic) char hasMedian;
@property (nonatomic) unsigned long long p95;
@property (nonatomic) char hasP95;
@property (nonatomic) float std;
@property (nonatomic) char hasStd;
@property (nonatomic) unsigned long long warmup;
@property (nonatomic) char hasWarmup;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAvg;
- (void)deleteMax;
- (void)deleteMedian;
- (void)deleteMin;
- (void)deleteNum;
- (void)deleteP95;
- (void)deleteStd;
- (void)deleteWarmup;
- (id)suppressMessageUnderConditions;

@end

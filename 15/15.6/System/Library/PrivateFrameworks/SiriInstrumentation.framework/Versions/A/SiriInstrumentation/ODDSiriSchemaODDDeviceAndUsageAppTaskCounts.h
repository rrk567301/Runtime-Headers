@class NSData;

@interface ODDSiriSchemaODDDeviceAndUsageAppTaskCounts : SISchemaInstrumentationMessage {
    struct { unsigned char completedSiriAppTaskCount : 1; unsigned char failedSiriAppTaskCount : 1; unsigned char cancelledSiriAppTaskCount : 1; unsigned char completedUIAppTaskCount : 1; } _has;
}

@property (nonatomic) unsigned int completedSiriAppTaskCount;
@property (nonatomic) char hasCompletedSiriAppTaskCount;
@property (nonatomic) unsigned int failedSiriAppTaskCount;
@property (nonatomic) char hasFailedSiriAppTaskCount;
@property (nonatomic) unsigned int cancelledSiriAppTaskCount;
@property (nonatomic) char hasCancelledSiriAppTaskCount;
@property (nonatomic) unsigned int completedUIAppTaskCount;
@property (nonatomic) char hasCompletedUIAppTaskCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelledSiriAppTaskCount;
- (void)deleteCompletedSiriAppTaskCount;
- (void)deleteCompletedUIAppTaskCount;
- (void)deleteFailedSiriAppTaskCount;
- (id)suppressMessageUnderConditions;

@end

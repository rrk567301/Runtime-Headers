@class NSData;

@interface ODMSiriSchemaODMSiriTaskCounts : SISchemaInstrumentationMessage {
    struct { unsigned char completedSiriTaskCount : 1; unsigned char failedSiriTaskCount : 1; unsigned char cancelledSiriTaskCount : 1; unsigned char completedUITaskCount : 1; } _has;
}

@property (nonatomic) unsigned int completedSiriTaskCount;
@property (nonatomic) char hasCompletedSiriTaskCount;
@property (nonatomic) unsigned int failedSiriTaskCount;
@property (nonatomic) char hasFailedSiriTaskCount;
@property (nonatomic) unsigned int cancelledSiriTaskCount;
@property (nonatomic) char hasCancelledSiriTaskCount;
@property (nonatomic) unsigned int completedUITaskCount;
@property (nonatomic) char hasCompletedUITaskCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelledSiriTaskCount;
- (void)deleteCompletedSiriTaskCount;
- (void)deleteCompletedUITaskCount;
- (void)deleteFailedSiriTaskCount;
- (id)suppressMessageUnderConditions;

@end

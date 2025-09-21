@class NSData;

@interface INFERENCESchemaINFERENCELongRunningTaskInfo : SISchemaInstrumentationMessage {
    struct { unsigned char durationInMs : 1; } _has;
}

@property (nonatomic) unsigned long long durationInMs;
@property (nonatomic) char hasDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDurationInMs;
- (id)suppressMessageUnderConditions;

@end

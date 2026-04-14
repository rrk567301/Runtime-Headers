@class NSData;

@interface FLOWSchemaFLOWSafariContext : SISchemaInstrumentationMessage {
    struct { unsigned char taskType : 1; } _has;
}

@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteTaskType;

@end

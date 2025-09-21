@class NSData, INFERENCESchemaINFERENCELongRunningTaskInfo;

@interface INFERENCESchemaINFERENCETaskSpecificInfo : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCELongRunningTaskInfo *longRunningTaskInfo;
@property (nonatomic) char hasLongRunningTaskInfo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTaskinfo;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLongRunningTaskInfo;
- (id)suppressMessageUnderConditions;

@end

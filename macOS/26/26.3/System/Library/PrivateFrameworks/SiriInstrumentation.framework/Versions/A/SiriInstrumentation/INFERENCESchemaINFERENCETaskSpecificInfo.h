@class NSData, INFERENCESchemaINFERENCELongRunningTaskInfo;

@interface INFERENCESchemaINFERENCETaskSpecificInfo : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCELongRunningTaskInfo *longRunningTaskInfo;
@property (nonatomic) BOOL hasLongRunningTaskInfo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichTaskinfo;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteLongRunningTaskInfo;

@end

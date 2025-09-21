@class NSString, NSData;

@interface SCSchemaSCSetUndoArgs : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *directInvocationId;
@property (nonatomic) char hasDirectInvocationId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDirectInvocationId;
- (id)suppressMessageUnderConditions;

@end

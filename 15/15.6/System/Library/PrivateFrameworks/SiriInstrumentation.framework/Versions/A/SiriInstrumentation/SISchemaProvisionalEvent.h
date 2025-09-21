@class NSString, NSData, SISchemaAnyEvent;

@interface SISchemaProvisionalEvent : SISchemaTopLevelUnionType {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) SISchemaAnyEvent *anyEvent;
@property (nonatomic) char hasAnyEvent;
@property (copy, nonatomic) NSString *typeId;
@property (nonatomic) char hasTypeId;
@property (nonatomic) long long version;
@property (nonatomic) char hasVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)getAnyEventType;
- (void)deleteAnyEvent;
- (void)deleteTypeId;
- (void)deleteVersion;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;

@end

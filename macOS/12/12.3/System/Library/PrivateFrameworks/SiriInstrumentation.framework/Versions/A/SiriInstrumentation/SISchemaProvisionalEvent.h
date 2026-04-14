@class NSString, NSData, SISchemaAnyEvent;

@interface SISchemaProvisionalEvent : SISchemaTopLevelUnionType {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) SISchemaAnyEvent *anyEvent;
@property (nonatomic) BOOL hasAnyEvent;
@property (copy, nonatomic) NSString *typeId;
@property (nonatomic) BOOL hasTypeId;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)qualifiedMessageName;
- (void)deleteVersion;
- (void)deleteAnyEvent;
- (void)deleteTypeId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end

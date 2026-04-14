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

- (id)qualifiedMessageName;
- (void)deleteVersion;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)deleteAnyEvent;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)deleteTypeId;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

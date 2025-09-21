@class NSData;

@interface IDENTITYSchemaIDENTITYUserPresenceSourceCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char userPresenceSource : 1; } _has;
}

@property (nonatomic) int userPresenceSource;
@property (nonatomic) char hasUserPresenceSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUserPresenceSource;
- (id)suppressMessageUnderConditions;

@end

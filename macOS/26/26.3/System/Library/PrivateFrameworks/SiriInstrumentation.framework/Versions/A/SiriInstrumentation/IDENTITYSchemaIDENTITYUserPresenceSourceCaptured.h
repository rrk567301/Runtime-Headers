@class NSData;

@interface IDENTITYSchemaIDENTITYUserPresenceSourceCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char userPresenceSource : 1; } _has;
}

@property (nonatomic) int userPresenceSource;
@property (nonatomic) BOOL hasUserPresenceSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteUserPresenceSource;

@end

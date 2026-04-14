@class NSString, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 : SISchemaInstrumentationMessage {
    struct { unsigned char adamId : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSString *contentTitle;
@property (nonatomic) BOOL hasContentTitle;
@property (nonatomic) unsigned int adamId;
@property (nonatomic) BOOL hasAdamId;
@property (copy, nonatomic) NSString *adamIdString;
@property (nonatomic) BOOL hasAdamIdString;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteLinkId;
- (void)deleteContentTitle;
- (void)deleteAdamId;
- (void)deleteAdamIdString;

@end

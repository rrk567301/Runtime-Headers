@class NSString, NSData;

@interface FLOWSchemaFLOWMediaPlayerMediaItem : SISchemaInstrumentationMessage {
    struct { unsigned char mediaType : 1; unsigned char isAlternative : 1; } _has;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *artist;
@property (nonatomic) BOOL hasArtist;
@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (copy, nonatomic) NSString *entityId;
@property (nonatomic) BOOL hasEntityId;
@property (nonatomic) BOOL isAlternative;
@property (nonatomic) BOOL hasIsAlternative;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTitle;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEntityId;
- (void)deleteMediaType;
- (void)deleteArtist;
- (void)deleteIsAlternative;

@end

@class NSString, NSData;

@interface FLOWSchemaFLOWMediaPlayerMediaItem : SISchemaInstrumentationMessage {
    struct { unsigned char mediaType : 1; unsigned char isAlternative : 1; unsigned char isNlsResult : 1; unsigned char isNlsContainerResult : 1; } _has;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) char hasTitle;
@property (copy, nonatomic) NSString *artist;
@property (nonatomic) char hasArtist;
@property (nonatomic) int mediaType;
@property (nonatomic) char hasMediaType;
@property (copy, nonatomic) NSString *entityId;
@property (nonatomic) char hasEntityId;
@property (nonatomic) char isAlternative;
@property (nonatomic) char hasIsAlternative;
@property (nonatomic) char isNlsResult;
@property (nonatomic) char hasIsNlsResult;
@property (nonatomic) char isNlsContainerResult;
@property (nonatomic) char hasIsNlsContainerResult;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteTitle;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMediaType;
- (void)deleteArtist;
- (void)deleteEntityId;
- (void)deleteIsAlternative;
- (void)deleteIsNlsContainerResult;
- (void)deleteIsNlsResult;
- (id)suppressMessageUnderConditions;

@end

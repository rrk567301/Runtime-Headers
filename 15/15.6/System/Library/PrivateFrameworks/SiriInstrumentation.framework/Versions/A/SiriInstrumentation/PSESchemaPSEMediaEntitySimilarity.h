@class NSData;

@interface PSESchemaPSEMediaEntitySimilarity : SISchemaInstrumentationMessage {
    struct { unsigned char isSameMediaTitle : 1; unsigned char isSameMediaArtist : 1; unsigned char isSameMediaAlbum : 1; unsigned char isSameMediaItem : 1; } _has;
}

@property (nonatomic) char isSameMediaTitle;
@property (nonatomic) char hasIsSameMediaTitle;
@property (nonatomic) char isSameMediaArtist;
@property (nonatomic) char hasIsSameMediaArtist;
@property (nonatomic) char isSameMediaAlbum;
@property (nonatomic) char hasIsSameMediaAlbum;
@property (nonatomic) char isSameMediaItem;
@property (nonatomic) char hasIsSameMediaItem;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSameMediaAlbum;
- (void)deleteIsSameMediaArtist;
- (void)deleteIsSameMediaItem;
- (void)deleteIsSameMediaTitle;
- (id)suppressMessageUnderConditions;

@end

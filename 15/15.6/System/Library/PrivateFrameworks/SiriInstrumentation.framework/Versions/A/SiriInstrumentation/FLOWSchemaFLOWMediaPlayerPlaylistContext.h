@class NSData;

@interface FLOWSchemaFLOWMediaPlayerPlaylistContext : SISchemaInstrumentationMessage {
    struct { unsigned char playlistSubtype : 1; } _has;
}

@property (nonatomic) int playlistSubtype;
@property (nonatomic) char hasPlaylistSubtype;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deletePlaylistSubtype;
- (id)suppressMessageUnderConditions;

@end

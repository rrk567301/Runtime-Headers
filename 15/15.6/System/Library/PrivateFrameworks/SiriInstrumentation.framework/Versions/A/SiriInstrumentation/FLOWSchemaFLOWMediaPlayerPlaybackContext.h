@class NSData, SISchemaUUID, FLOWSchemaFLOWMediaPlayerRadioStationContext, FLOWSchemaFLOWMediaPlayerPlaylistContext;

@interface FLOWSchemaFLOWMediaPlayerPlaybackContext : SISchemaInstrumentationMessage {
    struct { unsigned char executionSource : 1; unsigned char endpoint : 1; unsigned char contentSource : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (nonatomic) int executionSource;
@property (nonatomic) char hasExecutionSource;
@property (nonatomic) int endpoint;
@property (nonatomic) char hasEndpoint;
@property (nonatomic) int contentSource;
@property (nonatomic) char hasContentSource;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerRadioStationContext *radioStationContext;
@property (nonatomic) char hasRadioStationContext;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaylistContext *playlistContext;
@property (nonatomic) char hasPlaylistContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContenttype;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteContentSource;
- (void)deleteEndpoint;
- (void)deleteExecutionSource;
- (void)deleteLinkId;
- (void)deletePlaylistContext;
- (void)deleteRadioStationContext;
- (id)suppressMessageUnderConditions;

@end

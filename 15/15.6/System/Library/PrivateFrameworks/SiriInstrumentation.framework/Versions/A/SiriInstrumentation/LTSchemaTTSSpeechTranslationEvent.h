@class NSString, NSData;

@interface LTSchemaTTSSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char responseTimeMs : 1; unsigned char playbackBeginTimeMs : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) char hasRequestID;
@property (copy, nonatomic) NSString *selectedLocale;
@property (nonatomic) char hasSelectedLocale;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic) char hasResponseTimeMs;
@property (nonatomic) unsigned int playbackBeginTimeMs;
@property (nonatomic) char hasPlaybackBeginTimeMs;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestID;
- (void)deletePlaybackBeginTimeMs;
- (void)deleteResponseTimeMs;
- (void)deleteSelectedLocale;
- (id)suppressMessageUnderConditions;

@end

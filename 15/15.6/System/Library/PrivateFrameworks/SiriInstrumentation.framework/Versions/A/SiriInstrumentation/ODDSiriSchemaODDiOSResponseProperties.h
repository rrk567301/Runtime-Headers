@class NSData;

@interface ODDSiriSchemaODDiOSResponseProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAlwaysShowSiriCaptionsEnabled : 1; unsigned char isAlwaysShowSpeechEnabled : 1; } _has;
}

@property (nonatomic) char isAlwaysShowSiriCaptionsEnabled;
@property (nonatomic) char hasIsAlwaysShowSiriCaptionsEnabled;
@property (nonatomic) char isAlwaysShowSpeechEnabled;
@property (nonatomic) char hasIsAlwaysShowSpeechEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsAlwaysShowSpeechEnabled;
- (void)deleteIsAlwaysShowSiriCaptionsEnabled;
- (id)suppressMessageUnderConditions;

@end

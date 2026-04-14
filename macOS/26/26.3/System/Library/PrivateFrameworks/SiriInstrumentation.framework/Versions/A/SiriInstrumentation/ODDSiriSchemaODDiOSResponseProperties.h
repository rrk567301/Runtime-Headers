@class NSData;

@interface ODDSiriSchemaODDiOSResponseProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAlwaysShowSiriCaptionsEnabled : 1; unsigned char isAlwaysShowSpeechEnabled : 1; } _has;
}

@property (nonatomic) BOOL isAlwaysShowSiriCaptionsEnabled;
@property (nonatomic) BOOL hasIsAlwaysShowSiriCaptionsEnabled;
@property (nonatomic) BOOL isAlwaysShowSpeechEnabled;
@property (nonatomic) BOOL hasIsAlwaysShowSpeechEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsAlwaysShowSpeechEnabled;
- (void)deleteIsAlwaysShowSiriCaptionsEnabled;

@end

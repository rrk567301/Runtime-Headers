@class NSData;

@interface READSchemaREADPlaybackSessionFailed : SISchemaInstrumentationMessage {
    struct { unsigned char errorCodes : 1; } _has;
}

@property (nonatomic) int errorCodes;
@property (nonatomic) char hasErrorCodes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCodes;
- (id)suppressMessageUnderConditions;

@end

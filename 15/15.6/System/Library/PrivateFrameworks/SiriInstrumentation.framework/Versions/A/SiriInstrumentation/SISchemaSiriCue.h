@class NSData;

@interface SISchemaSiriCue : SISchemaInstrumentationMessage {
    struct { unsigned char siriCueType : 1; } _has;
}

@property (nonatomic) int siriCueType;
@property (nonatomic) char hasSiriCueType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSiriCueType;
- (id)suppressMessageUnderConditions;

@end

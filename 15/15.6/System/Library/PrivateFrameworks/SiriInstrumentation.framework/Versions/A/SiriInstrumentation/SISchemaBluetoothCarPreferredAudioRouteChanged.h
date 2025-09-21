@class NSData;

@interface SISchemaBluetoothCarPreferredAudioRouteChanged : SISchemaInstrumentationMessage {
    struct { unsigned char before : 1; unsigned char after : 1; } _has;
}

@property (nonatomic) int before;
@property (nonatomic) char hasBefore;
@property (nonatomic) int after;
@property (nonatomic) char hasAfter;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAfter;
- (void)deleteBefore;
- (id)suppressMessageUnderConditions;

@end

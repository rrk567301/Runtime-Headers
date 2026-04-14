@class NSData;

@interface SISchemaBluetoothCarPreferredAudioRouteChanged : SISchemaInstrumentationMessage {
    struct { unsigned char before : 1; unsigned char after : 1; } _has;
}

@property (nonatomic) int before;
@property (nonatomic) BOOL hasBefore;
@property (nonatomic) int after;
@property (nonatomic) BOOL hasAfter;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAfter;
- (void)deleteBefore;

@end

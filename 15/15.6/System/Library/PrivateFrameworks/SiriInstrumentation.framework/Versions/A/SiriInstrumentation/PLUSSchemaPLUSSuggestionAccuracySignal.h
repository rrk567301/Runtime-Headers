@class NSData;

@interface PLUSSchemaPLUSSuggestionAccuracySignal : SISchemaInstrumentationMessage {
    struct { unsigned char signalType : 1; unsigned char signalSource : 1; } _has;
}

@property (nonatomic) int signalType;
@property (nonatomic) char hasSignalType;
@property (nonatomic) int signalSource;
@property (nonatomic) char hasSignalSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteSignalSource;
- (void)deleteSignalType;
- (id)suppressMessageUnderConditions;

@end

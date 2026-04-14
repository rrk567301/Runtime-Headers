@class NSData;

@interface PLUSSchemaPLUSSuggestionAccuracySignal : SISchemaInstrumentationMessage {
    struct { unsigned char signalType : 1; unsigned char signalSource : 1; } _has;
}

@property (nonatomic) int signalType;
@property (nonatomic) BOOL hasSignalType;
@property (nonatomic) int signalSource;
@property (nonatomic) BOOL hasSignalSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteSignalSource;
- (void)deleteSignalType;

@end

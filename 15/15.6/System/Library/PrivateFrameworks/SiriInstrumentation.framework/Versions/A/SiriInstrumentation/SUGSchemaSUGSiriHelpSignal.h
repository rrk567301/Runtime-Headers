@class NSString, NSData;

@interface SUGSchemaSUGSiriHelpSignal : SISchemaInstrumentationMessage {
    struct { unsigned char depthFromActiveSignal : 1; unsigned char signalType : 1; } _has;
}

@property (nonatomic) unsigned int depthFromActiveSignal;
@property (nonatomic) char hasDepthFromActiveSignal;
@property (copy, nonatomic) NSString *signalValue;
@property (nonatomic) char hasSignalValue;
@property (nonatomic) int signalType;
@property (nonatomic) char hasSignalType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDepthFromActiveSignal;
- (void)deleteSignalType;
- (void)deleteSignalValue;
- (id)suppressMessageUnderConditions;

@end

@class NSString, NSData;

@interface SUGSchemaSUGSiriHelpSignal : SISchemaInstrumentationMessage {
    struct { unsigned char depthFromActiveSignal : 1; unsigned char signalType : 1; } _has;
}

@property (nonatomic) unsigned int depthFromActiveSignal;
@property (nonatomic) BOOL hasDepthFromActiveSignal;
@property (copy, nonatomic) NSString *signalValue;
@property (nonatomic) BOOL hasSignalValue;
@property (nonatomic) int signalType;
@property (nonatomic) BOOL hasSignalType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteDepthFromActiveSignal;
- (void)deleteSignalType;
- (void)deleteSignalValue;

@end

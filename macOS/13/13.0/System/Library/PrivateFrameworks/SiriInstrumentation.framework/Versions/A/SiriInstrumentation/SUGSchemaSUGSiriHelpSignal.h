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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteDepthFromActiveSignal;
- (void)deleteSignalValue;
- (void)deleteSignalType;

@end

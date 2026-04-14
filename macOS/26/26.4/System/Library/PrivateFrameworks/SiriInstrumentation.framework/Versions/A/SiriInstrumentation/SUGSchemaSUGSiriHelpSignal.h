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

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDepthFromActiveSignal;
- (void)deleteSignalType;
- (void)deleteSignalValue;

@end

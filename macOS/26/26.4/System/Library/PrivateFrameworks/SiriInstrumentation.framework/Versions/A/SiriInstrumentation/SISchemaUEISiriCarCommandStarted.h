@class NSData;

@interface SISchemaUEISiriCarCommandStarted : SISchemaInstrumentationMessage {
    struct { unsigned char carPlayConnection : 1; unsigned char isEnhancedSiriEnabled : 1; unsigned char isEnhancedSiriRequest : 1; } _has;
}

@property (nonatomic) int carPlayConnection;
@property (nonatomic) BOOL hasCarPlayConnection;
@property (nonatomic) BOOL isEnhancedSiriEnabled;
@property (nonatomic) BOOL hasIsEnhancedSiriEnabled;
@property (nonatomic) BOOL isEnhancedSiriRequest;
@property (nonatomic) BOOL hasIsEnhancedSiriRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarPlayConnection;
- (void)deleteIsEnhancedSiriEnabled;
- (void)deleteIsEnhancedSiriRequest;

@end

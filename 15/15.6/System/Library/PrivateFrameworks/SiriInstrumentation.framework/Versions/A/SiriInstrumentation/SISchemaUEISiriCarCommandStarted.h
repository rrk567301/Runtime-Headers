@class NSData;

@interface SISchemaUEISiriCarCommandStarted : SISchemaInstrumentationMessage {
    struct { unsigned char carPlayConnection : 1; unsigned char isEnhancedSiriEnabled : 1; unsigned char isEnhancedSiriRequest : 1; } _has;
}

@property (nonatomic) int carPlayConnection;
@property (nonatomic) char hasCarPlayConnection;
@property (nonatomic) char isEnhancedSiriEnabled;
@property (nonatomic) char hasIsEnhancedSiriEnabled;
@property (nonatomic) char isEnhancedSiriRequest;
@property (nonatomic) char hasIsEnhancedSiriRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarPlayConnection;
- (void)deleteIsEnhancedSiriEnabled;
- (void)deleteIsEnhancedSiriRequest;
- (id)suppressMessageUnderConditions;

@end

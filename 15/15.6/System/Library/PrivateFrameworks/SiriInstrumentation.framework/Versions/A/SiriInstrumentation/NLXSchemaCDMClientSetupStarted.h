@class NSData;

@interface NLXSchemaCDMClientSetupStarted : SISchemaInstrumentationMessage {
    struct { unsigned char exists : 1; unsigned char serviceGraphName : 1; unsigned char performWarmupOperations : 1; unsigned char memoryPressure : 1; } _has;
}

@property (nonatomic) char exists;
@property (nonatomic) char hasExists;
@property (nonatomic) int serviceGraphName;
@property (nonatomic) char hasServiceGraphName;
@property (nonatomic) char performWarmupOperations;
@property (nonatomic) char hasPerformWarmupOperations;
@property (nonatomic) int memoryPressure;
@property (nonatomic) char hasMemoryPressure;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteExists;
- (void)deleteMemoryPressure;
- (void)deletePerformWarmupOperations;
- (void)deleteServiceGraphName;
- (id)suppressMessageUnderConditions;

@end

@class NSData;

@interface CloudKitSchemaCKErrorReported : SISchemaInstrumentationMessage {
    struct { unsigned char errorType : 1; } _has;
}

@property (nonatomic) int errorType;
@property (nonatomic) BOOL hasErrorType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteErrorType;

@end

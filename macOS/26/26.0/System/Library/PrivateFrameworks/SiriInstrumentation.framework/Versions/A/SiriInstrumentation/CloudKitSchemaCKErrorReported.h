@class NSData;

@interface CloudKitSchemaCKErrorReported : SISchemaInstrumentationMessage {
    struct { unsigned char errorType : 1; } _has;
}

@property (nonatomic) int errorType;
@property (nonatomic) BOOL hasErrorType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteErrorType;

@end

@class NSString, NSData;

@interface GRRSchemaGRRSystemErrorOccurred : SISchemaInstrumentationMessage {
    struct { unsigned char errorCode : 1; } _has;
}

@property (nonatomic) int errorCode;
@property (nonatomic) char hasErrorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) char hasErrorMessage;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteErrorCode;
- (void)deleteErrorMessage;
- (id)suppressMessageUnderConditions;

@end

@class NSData, POMMESSchemaPOMMESPegasusRequestArguments;

@interface POMMESSchemaPOMMESPegasusKitPegasusRequest : SISchemaInstrumentationMessage {
    struct { unsigned char rawRequestSizeInKB : 1; unsigned char compressedRequestSizeInKB : 1; } _has;
}

@property (nonatomic) unsigned int rawRequestSizeInKB;
@property (nonatomic) BOOL hasRawRequestSizeInKB;
@property (nonatomic) unsigned int compressedRequestSizeInKB;
@property (nonatomic) BOOL hasCompressedRequestSizeInKB;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestArguments *pegasusRequestArguments;
@property (nonatomic) BOOL hasPegasusRequestArguments;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCompressedRequestSizeInKB;
- (void)deletePegasusRequestArguments;
- (void)deleteRawRequestSizeInKB;

@end

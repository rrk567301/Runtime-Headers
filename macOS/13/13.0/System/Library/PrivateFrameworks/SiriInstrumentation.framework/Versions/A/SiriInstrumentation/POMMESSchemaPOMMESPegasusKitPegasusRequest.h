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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteRawRequestSizeInKB;
- (void)deleteCompressedRequestSizeInKB;
- (void)deletePegasusRequestArguments;

@end

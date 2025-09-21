@class NSData, POMMESSchemaPOMMESPegasusRequestArguments;

@interface POMMESSchemaPOMMESPegasusKitPegasusRequest : SISchemaInstrumentationMessage {
    struct { unsigned char rawRequestSizeInKB : 1; unsigned char compressedRequestSizeInKB : 1; } _has;
}

@property (nonatomic) unsigned int rawRequestSizeInKB;
@property (nonatomic) char hasRawRequestSizeInKB;
@property (nonatomic) unsigned int compressedRequestSizeInKB;
@property (nonatomic) char hasCompressedRequestSizeInKB;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestArguments *pegasusRequestArguments;
@property (nonatomic) char hasPegasusRequestArguments;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCompressedRequestSizeInKB;
- (void)deletePegasusRequestArguments;
- (void)deleteRawRequestSizeInKB;
- (id)suppressMessageUnderConditions;

@end

@class NSData, POMMESSchemaPOMMESPegasusKitNetworkTimingData;

@interface POMMESSchemaPOMMESPegasusKitPegasusResponse : SISchemaInstrumentationMessage {
    struct { unsigned char rawResponseSizeInKB : 1; unsigned char compressedResponseSizeInKB : 1; } _has;
}

@property (nonatomic) unsigned int rawResponseSizeInKB;
@property (nonatomic) char hasRawResponseSizeInKB;
@property (nonatomic) unsigned int compressedResponseSizeInKB;
@property (nonatomic) char hasCompressedResponseSizeInKB;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitNetworkTimingData *timingData;
@property (nonatomic) char hasTimingData;
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
- (void)deleteCompressedResponseSizeInKB;
- (void)deleteRawResponseSizeInKB;
- (void)deleteTimingData;
- (id)suppressMessageUnderConditions;

@end

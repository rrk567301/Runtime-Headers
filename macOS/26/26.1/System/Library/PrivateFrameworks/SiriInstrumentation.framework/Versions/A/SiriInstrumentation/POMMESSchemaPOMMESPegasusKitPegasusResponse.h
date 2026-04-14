@class NSData, POMMESSchemaPOMMESPegasusKitNetworkTimingData;

@interface POMMESSchemaPOMMESPegasusKitPegasusResponse : SISchemaInstrumentationMessage {
    struct { unsigned char rawResponseSizeInKB : 1; unsigned char compressedResponseSizeInKB : 1; } _has;
}

@property (nonatomic) unsigned int rawResponseSizeInKB;
@property (nonatomic) BOOL hasRawResponseSizeInKB;
@property (nonatomic) unsigned int compressedResponseSizeInKB;
@property (nonatomic) BOOL hasCompressedResponseSizeInKB;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitNetworkTimingData *timingData;
@property (nonatomic) BOOL hasTimingData;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteCompressedResponseSizeInKB;
- (void)deleteRawResponseSizeInKB;
- (void)deleteTimingData;

@end

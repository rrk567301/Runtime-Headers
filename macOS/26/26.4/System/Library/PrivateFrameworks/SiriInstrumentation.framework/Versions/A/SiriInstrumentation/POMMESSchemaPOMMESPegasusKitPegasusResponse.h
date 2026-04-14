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

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCompressedResponseSizeInKB;
- (void)deleteRawResponseSizeInKB;
- (void)deleteTimingData;

@end

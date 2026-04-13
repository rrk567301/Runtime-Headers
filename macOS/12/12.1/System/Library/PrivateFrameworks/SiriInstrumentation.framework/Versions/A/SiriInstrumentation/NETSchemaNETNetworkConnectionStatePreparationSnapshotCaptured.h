@class NSData;

@interface NETSchemaNETNetworkConnectionStatePreparationSnapshotCaptured : SISchemaInstrumentationMessage {
    struct { unsigned char hasDNS : 1; } _has;
}

@property (nonatomic) BOOL hasDNS;
@property (nonatomic) BOOL hasHasDNS;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end

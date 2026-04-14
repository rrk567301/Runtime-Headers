@class NSString, NSArray, NSData;

@interface SCSchemaSCCheckCorrectionResult : SISchemaInstrumentationMessage {
    struct { unsigned char correctionType : 1; } _has;
}

@property (copy, nonatomic) NSString *correctedAttribute;
@property (nonatomic) BOOL hasCorrectedAttribute;
@property (nonatomic) int correctionType;
@property (nonatomic) BOOL hasCorrectionType;
@property (copy, nonatomic) NSArray *referredEntities;
@property (copy, nonatomic) NSArray *incomingEntities;
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
- (void)deleteCorrectedAttribute;
- (void)deleteCorrectionType;
- (void)clearReferredEntities;
- (void)deleteReferredEntities;
- (void)addReferredEntities:(id)a0;
- (unsigned long long)referredEntitiesCount;
- (id)referredEntitiesAtIndex:(unsigned long long)a0;
- (void)clearIncomingEntities;
- (void)deleteIncomingEntities;
- (void)addIncomingEntities:(id)a0;
- (unsigned long long)incomingEntitiesCount;
- (id)incomingEntitiesAtIndex:(unsigned long long)a0;

@end

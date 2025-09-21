@class NSString, NSData;

@interface SISchemaCasinoRelationship : SISchemaInstrumentationMessage {
    struct { unsigned char casinoFromType : 1; } _has;
}

@property (copy, nonatomic) NSString *viewIDFrom;
@property (nonatomic) BOOL hasViewIDFrom;
@property (copy, nonatomic) NSString *viewIDTo;
@property (nonatomic) BOOL hasViewIDTo;
@property (nonatomic) int casinoFromType;
@property (nonatomic) BOOL hasCasinoFromType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteCasinoFromType;
- (void)deleteViewIDFrom;
- (void)deleteViewIDTo;

@end

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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteCasinoFromType;
- (void)deleteViewIDFrom;
- (void)deleteViewIDTo;

@end

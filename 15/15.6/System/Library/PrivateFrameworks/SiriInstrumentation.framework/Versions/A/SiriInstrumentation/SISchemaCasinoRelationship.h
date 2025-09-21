@class NSString, NSData;

@interface SISchemaCasinoRelationship : SISchemaInstrumentationMessage {
    struct { unsigned char casinoFromType : 1; } _has;
}

@property (copy, nonatomic) NSString *viewIDFrom;
@property (nonatomic) char hasViewIDFrom;
@property (copy, nonatomic) NSString *viewIDTo;
@property (nonatomic) char hasViewIDTo;
@property (nonatomic) int casinoFromType;
@property (nonatomic) char hasCasinoFromType;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCasinoFromType;
- (void)deleteViewIDFrom;
- (void)deleteViewIDTo;
- (id)suppressMessageUnderConditions;

@end

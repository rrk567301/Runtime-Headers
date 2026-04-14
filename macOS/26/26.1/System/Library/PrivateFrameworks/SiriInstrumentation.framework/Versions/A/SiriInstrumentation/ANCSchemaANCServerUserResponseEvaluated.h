@class NSData;

@interface ANCSchemaANCServerUserResponseEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char userResponseCategory : 1; } _has;
}

@property (nonatomic) int userResponseCategory;
@property (nonatomic) BOOL hasUserResponseCategory;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteUserResponseCategory;

@end

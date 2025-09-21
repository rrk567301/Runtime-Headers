@class NSData;

@interface IFTSchemaIFTSystemRequirementAuthenticationRequest : SISchemaInstrumentationMessage {
    struct { unsigned char authenticationLevel : 1; } _has;
}

@property (nonatomic) int authenticationLevel;
@property (nonatomic) char hasAuthenticationLevel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAuthenticationLevel;
- (id)suppressMessageUnderConditions;

@end

@class NSData;

@interface SetupSchemaProvisionalSiriSetupStep : SISchemaInstrumentationMessage {
    struct { unsigned char page : 1; } _has;
}

@property (nonatomic) int page;
@property (nonatomic) BOOL hasPage;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deletePage;

@end

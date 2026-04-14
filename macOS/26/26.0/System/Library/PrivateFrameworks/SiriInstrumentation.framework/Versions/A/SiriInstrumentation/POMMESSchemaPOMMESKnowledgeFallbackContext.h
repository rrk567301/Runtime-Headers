@class NSData;

@interface POMMESSchemaPOMMESKnowledgeFallbackContext : SISchemaInstrumentationMessage {
    struct { unsigned char isKnowledgeFallbackOffered : 1; } _has;
}

@property (nonatomic) BOOL isKnowledgeFallbackOffered;
@property (nonatomic) BOOL hasIsKnowledgeFallbackOffered;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)deleteIsKnowledgeFallbackOffered;

@end

@class NSData;

@interface POMMESSchemaPOMMESKnowledgeFallbackContext : SISchemaInstrumentationMessage {
    struct { unsigned char isKnowledgeFallbackOffered : 1; } _has;
}

@property (nonatomic) BOOL isKnowledgeFallbackOffered;
@property (nonatomic) BOOL hasIsKnowledgeFallbackOffered;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsKnowledgeFallbackOffered;

@end

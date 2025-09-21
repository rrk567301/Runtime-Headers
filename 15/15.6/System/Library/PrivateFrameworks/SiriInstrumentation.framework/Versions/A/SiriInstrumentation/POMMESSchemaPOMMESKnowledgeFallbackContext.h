@class NSData;

@interface POMMESSchemaPOMMESKnowledgeFallbackContext : SISchemaInstrumentationMessage {
    struct { unsigned char isKnowledgeFallbackOffered : 1; } _has;
}

@property (nonatomic) char isKnowledgeFallbackOffered;
@property (nonatomic) char hasIsKnowledgeFallbackOffered;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsKnowledgeFallbackOffered;
- (id)suppressMessageUnderConditions;

@end

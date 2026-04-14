@class NSData;

@interface PEGASUSSchemaPEGASUSRewrittenUtterance : SISchemaInstrumentationMessage {
    struct { unsigned char rewriteType : 1; unsigned char isUsed : 1; } _has;
}

@property (nonatomic) int rewriteType;
@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) BOOL isUsed;
@property (nonatomic) BOOL hasIsUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteIsUsed;
- (void)deleteRewriteType;

@end

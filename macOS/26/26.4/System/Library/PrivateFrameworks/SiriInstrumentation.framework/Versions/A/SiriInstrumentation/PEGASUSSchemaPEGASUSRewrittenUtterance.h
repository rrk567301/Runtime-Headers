@class NSData;

@interface PEGASUSSchemaPEGASUSRewrittenUtterance : SISchemaInstrumentationMessage {
    struct { unsigned char rewriteType : 1; unsigned char isUsed : 1; } _has;
}

@property (nonatomic) int rewriteType;
@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) BOOL isUsed;
@property (nonatomic) BOOL hasIsUsed;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsUsed;
- (void)deleteRewriteType;

@end

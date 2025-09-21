@class NSData;

@interface TTMSchemaTTMOverrideFailure : SISchemaInstrumentationMessage {
    struct { unsigned char overrideType : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int overrideType;
@property (nonatomic) char hasOverrideType;
@property (nonatomic) int reason;
@property (nonatomic) char hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteOverrideType;
- (id)suppressMessageUnderConditions;

@end

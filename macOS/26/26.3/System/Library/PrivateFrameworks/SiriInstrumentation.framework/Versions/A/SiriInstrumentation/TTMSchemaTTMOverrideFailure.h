@class NSData;

@interface TTMSchemaTTMOverrideFailure : SISchemaInstrumentationMessage {
    struct { unsigned char overrideType : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int overrideType;
@property (nonatomic) BOOL hasOverrideType;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteOverrideType;

@end

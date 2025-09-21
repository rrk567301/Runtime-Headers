@class NSString, NSData;

@interface RGSiriSchemaRGOverrideEnded : SISchemaInstrumentationMessage {
    struct { unsigned char overrideType : 1; } _has;
}

@property (nonatomic) int overrideType;
@property (nonatomic) BOOL hasOverrideType;
@property (copy, nonatomic) NSString *overrideId;
@property (nonatomic) BOOL hasOverrideId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteOverrideId;
- (void)deleteOverrideType;

@end

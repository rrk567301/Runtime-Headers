@class NSString, NSData;

@interface RGSiriSchemaRGOverrideEnded : SISchemaInstrumentationMessage {
    struct { unsigned char overrideType : 1; } _has;
}

@property (nonatomic) int overrideType;
@property (nonatomic) BOOL hasOverrideType;
@property (copy, nonatomic) NSString *overrideId;
@property (nonatomic) BOOL hasOverrideId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOverrideId;
- (void)deleteOverrideType;

@end

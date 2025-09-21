@class NSString, NSData;

@interface RGSiriSchemaRGOverrideEnded : SISchemaInstrumentationMessage {
    struct { unsigned char overrideType : 1; } _has;
}

@property (nonatomic) int overrideType;
@property (nonatomic) char hasOverrideType;
@property (copy, nonatomic) NSString *overrideId;
@property (nonatomic) char hasOverrideId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteOverrideId;
- (void)deleteOverrideType;
- (id)suppressMessageUnderConditions;

@end

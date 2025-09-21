@class NSData, LCServiceBlacklistedFields, LCServiceLoggingParameters;

@interface LCServiceCategoryConfiguration : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; } _has;
}

@property (nonatomic) int eventType;
@property (nonatomic) char hasEventType;
@property (retain, nonatomic) LCServiceLoggingParameters *categoryParameters;
@property (nonatomic) char hasCategoryParameters;
@property (retain, nonatomic) LCServiceBlacklistedFields *blacklist;
@property (nonatomic) char hasBlacklist;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBlacklist;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventType;
- (void)deleteCategoryParameters;
- (id)suppressMessageUnderConditions;

@end

@class NSData, LCServiceBlacklistedFields, LCServiceLoggingParameters;

@interface LCServiceCategoryConfiguration : SISchemaInstrumentationMessage {
    struct { unsigned char eventType : 1; } _has;
}

@property (nonatomic) int eventType;
@property (nonatomic) BOOL hasEventType;
@property (retain, nonatomic) LCServiceLoggingParameters *categoryParameters;
@property (nonatomic) BOOL hasCategoryParameters;
@property (retain, nonatomic) LCServiceBlacklistedFields *blacklist;
@property (nonatomic) BOOL hasBlacklist;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteEventType;
- (void)deleteBlacklist;
- (void)deleteCategoryParameters;

@end

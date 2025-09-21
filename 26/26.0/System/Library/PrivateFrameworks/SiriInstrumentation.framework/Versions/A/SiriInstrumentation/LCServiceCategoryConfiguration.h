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

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteBlacklist;
- (void)deleteEventType;
- (void)deleteCategoryParameters;

@end

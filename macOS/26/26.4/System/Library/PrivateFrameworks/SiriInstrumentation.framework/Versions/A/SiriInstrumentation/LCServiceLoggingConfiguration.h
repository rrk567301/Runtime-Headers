@class NSArray, NSData, LCServiceLoggingParameters;

@interface LCServiceLoggingConfiguration : SISchemaInstrumentationMessage {
    struct { unsigned char configurationVersion : 1; } _has;
}

@property (retain, nonatomic) LCServiceLoggingParameters *defaultParameters;
@property (nonatomic) BOOL hasDefaultParameters;
@property (nonatomic) int configurationVersion;
@property (nonatomic) BOOL hasConfigurationVersion;
@property (copy, nonatomic) NSArray *applications;
@property (copy, nonatomic) NSArray *blacklistedBundleIdentifiers;
@property (copy, nonatomic) NSArray *denyListedCategories;
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
- (void)addApplications:(id)a0;
- (void)addBlacklistedBundleIdentifiers:(id)a0;
- (void)addDenyListedCategories:(int)a0;
- (id)applicationsAtIndex:(unsigned long long)a0;
- (unsigned long long)applicationsCount;
- (id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)blacklistedBundleIdentifiersCount;
- (void)clearApplications;
- (void)clearBlacklistedBundleIdentifiers;
- (void)clearDenyListedCategories;
- (void)deleteApplications;
- (void)deleteBlacklistedBundleIdentifiers;
- (void)deleteConfigurationVersion;
- (void)deleteDefaultParameters;
- (void)deleteDenyListedCategories;
- (int)denyListedCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)denyListedCategoriesCount;

@end

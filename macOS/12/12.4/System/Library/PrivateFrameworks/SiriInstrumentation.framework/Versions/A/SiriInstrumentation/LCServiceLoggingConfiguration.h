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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearApplications;
- (void)clearBlacklistedBundleIdentifiers;
- (void)clearDenyListedCategories;
- (void)addApplications:(id)a0;
- (void)addBlacklistedBundleIdentifiers:(id)a0;
- (void)addDenyListedCategories:(int)a0;
- (void)deleteDefaultParameters;
- (void)deleteConfigurationVersion;
- (void)deleteApplications;
- (unsigned long long)applicationsCount;
- (id)applicationsAtIndex:(unsigned long long)a0;
- (void)deleteBlacklistedBundleIdentifiers;
- (unsigned long long)blacklistedBundleIdentifiersCount;
- (id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)a0;
- (void)deleteDenyListedCategories;
- (unsigned long long)denyListedCategoriesCount;
- (int)denyListedCategoriesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end

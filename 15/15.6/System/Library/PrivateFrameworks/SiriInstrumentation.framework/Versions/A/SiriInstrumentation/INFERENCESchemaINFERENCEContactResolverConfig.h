@class NSArray, NSData;

@interface INFERENCESchemaINFERENCEContactResolverConfig : SISchemaInstrumentationMessage {
    struct { unsigned char isSearchingFirstPartyContacts : 1; unsigned char contactSearchSuggestedType : 1; unsigned char domainsToSearchForHistory : 1; unsigned char actionType : 1; } _has;
}

@property (nonatomic) char isSearchingFirstPartyContacts;
@property (nonatomic) char hasIsSearchingFirstPartyContacts;
@property (nonatomic) int contactSearchSuggestedType;
@property (nonatomic) char hasContactSearchSuggestedType;
@property (nonatomic) int domainsToSearchForHistory;
@property (nonatomic) char hasDomainsToSearchForHistory;
@property (nonatomic) int actionType;
@property (nonatomic) char hasActionType;
@property (copy, nonatomic) NSArray *appBundleIds;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDomainsToSearchForHistory;
- (void)addAppBundleIds:(id)a0;
- (id)appBundleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)appBundleIdsCount;
- (void)clearAppBundleIds;
- (void)deleteActionType;
- (void)deleteAppBundleIds;
- (void)deleteContactSearchSuggestedType;
- (void)deleteIsSearchingFirstPartyContacts;
- (id)suppressMessageUnderConditions;

@end

@class NSString, NSArray;

@interface GEOTerritoryRegulatoryInfo : NSObject

@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) NSString *iso3166CountryCode;
@property (readonly, nonatomic) NSString *iso3166CountryCode2;
@property (readonly, nonatomic) NSString *iso3166CountryCode3;
@property (readonly, nonatomic, getter=isDisputed) BOOL disputed;
@property (readonly, nonatomic) NSString *disputedTerritoryName;
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes;
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes2;
@property (readonly, nonatomic) NSArray *interestedPartyIso3166CountryCodes3;
@property (readonly, nonatomic, getter=isCoastalWaters) long long coastalWaters;

- (BOOL)isEqualToGEOTerritoryRegulatoryInfo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUnsafeTerritoryData:(id)a0 nameDB:(id)a1 iso3to2Mapping:(id)a2;
- (id)description;

@end

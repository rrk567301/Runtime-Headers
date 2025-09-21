@class NSUUID, NSDate, NSData, NSString, RTLocation, RTAddress, RTMapItemExtendedAttributes, NSNumber;

@interface RTMapItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTMapItemExtendedAttributes *extendedAttributes;
@property (nonatomic) unsigned long long source;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double weight;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSData *geoMapItemHandle;
@property (readonly, nonatomic) RTAddress *address;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) NSNumber *categoryMUID;
@property (readonly, nonatomic) unsigned long long mapItemPlaceType;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) long long resultProviderID;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, copy, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL disputed;
@property (readonly, nonatomic) NSData *geoMapItemIdentifier;

+ (id)placeTypeToString:(unsigned long long)a0;
+ (id)sourceToString:(unsigned long long)a0;
+ (BOOL)hasKnownTypeItem:(id)a0;
+ (double)weightForExtendedAttributes:(id)a0;
+ (double)weightForSource:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToMapItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 categoryMUID:(id)a3 address:(id)a4 location:(id)a5 source:(unsigned long long)a6 mapItemPlaceType:(unsigned long long)a7 muid:(unsigned long long)a8 resultProviderID:(long long)a9 geoMapItemHandle:(id)a10 creationDate:(id)a11 expirationDate:(id)a12 extendedAttributes:(id)a13 displayLanguage:(id)a14 disputed:(BOOL)a15;
- (id)outputToDictionary;
- (BOOL)validMUID;
- (void)updateWeightWithSource:(unsigned long long)a0 extendedAttributes:(id)a1;

@end

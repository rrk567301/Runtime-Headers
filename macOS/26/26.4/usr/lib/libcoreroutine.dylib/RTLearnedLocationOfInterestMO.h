@class NSUUID, NSString, NSData, NSDate, NSSet, NSArray, NSOrderedSet, NSNumber;

@interface RTLearnedLocationOfInterestMO : NSManagedObject

@property (copy, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSNumber *dataPointCount;
@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSNumber *locationLatitude;
@property (copy, nonatomic) NSNumber *locationLongitude;
@property (copy, nonatomic) NSNumber *locationReferenceFrame;
@property (copy, nonatomic) NSNumber *locationHorizontalUncertainty;
@property (copy, nonatomic) NSNumber *locationAltitude;
@property (copy, nonatomic) NSNumber *locationVerticalUncertainty;
@property (copy, nonatomic) NSNumber *locationSourceAccuracy;
@property (copy, nonatomic) NSString *placeCustomLabel;
@property (retain, nonatomic) NSUUID *placeIdentifier;
@property (retain, nonatomic) NSUUID *placeMapItemIdentifier;
@property (copy, nonatomic) NSNumber *placeType;
@property (copy, nonatomic) NSNumber *placeTypeSource;
@property (copy, nonatomic) NSDate *placeExpirationDate;
@property (copy, nonatomic) NSDate *placeCreationDate;
@property (copy, nonatomic) NSString *mapItemCategory;
@property (copy, nonatomic) NSNumber *mapItemCategoryMUID;
@property (copy, nonatomic) NSDate *mapItemCreationDate;
@property (copy, nonatomic) NSString *mapItemDisplayLanguage;
@property (nonatomic) BOOL mapItemDisputed;
@property (copy, nonatomic) NSDate *mapItemExpirationDate;
@property (copy, nonatomic) NSData *mapItemGeoMapItemHandle;
@property (copy, nonatomic) NSData *mapItemGeoMapItemIdentifier;
@property (copy, nonatomic) NSNumber *mapItemLatitude;
@property (copy, nonatomic) NSNumber *mapItemLongitude;
@property (copy, nonatomic) NSNumber *mapItemMUID;
@property (copy, nonatomic) NSString *mapItemName;
@property (copy, nonatomic) NSNumber *mapItemPlaceType;
@property (copy, nonatomic) NSNumber *mapItemReferenceFrame;
@property (copy, nonatomic) NSNumber *mapItemResultProviderID;
@property (copy, nonatomic) NSNumber *mapItemSource;
@property (copy, nonatomic) NSNumber *mapItemUncertainty;
@property (copy, nonatomic) NSArray *mapItemBusinessHours;
@property (copy, nonatomic) NSString *mapItemExtendedAttributesAddressIdentifier;
@property (copy, nonatomic) NSUUID *mapItemExtendedAttributesIdentifier;
@property (copy, nonatomic) NSNumber *mapItemExtendedAttributesIsMe;
@property (copy, nonatomic) NSNumber *mapItemExtendedAttributesWifiConfidence;
@property (copy, nonatomic) NSNumber *mapItemExtendedAttributesWifiFingerprintLabelType;
@property (copy, nonatomic) NSString *addressAdministrativeArea;
@property (copy, nonatomic) NSString *addressAdministrativeAreaCode;
@property (copy, nonatomic) NSArray *addressAreasOfInterest;
@property (copy, nonatomic) NSString *addressCountry;
@property (copy, nonatomic) NSString *addressCountryCode;
@property (copy, nonatomic) NSDate *addressCreationDate;
@property (copy, nonatomic) NSDate *addressExpirationDate;
@property (copy, nonatomic) NSData *addressGeoAddressData;
@property (retain, nonatomic) NSUUID *addressIdentifier;
@property (copy, nonatomic) NSString *addressInlandWater;
@property (copy, nonatomic) NSNumber *addressIsland;
@property (copy, nonatomic) NSString *addressISO3166CountryCode;
@property (copy, nonatomic) NSString *addressISO3166SubdivisionCode;
@property (copy, nonatomic) NSString *addressLocality;
@property (copy, nonatomic) NSString *addressOcean;
@property (copy, nonatomic) NSString *addressPostalCode;
@property (copy, nonatomic) NSString *addressSubAdministrativeArea;
@property (copy, nonatomic) NSString *addressSubLocality;
@property (retain, nonatomic) NSArray *addressSubPremises;
@property (copy, nonatomic) NSString *addressSubThoroughfare;
@property (copy, nonatomic) NSString *addressThoroughfare;
@property (retain, nonatomic) NSSet *transitions;
@property (retain, nonatomic) NSOrderedSet *visits;

+ (id)fetchRequestSortedByCreation;
+ (id)fetchRequest;
+ (id)managedObjectWithLocationOfInterest:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)managedObjectWithLocationOfInterest:(id)a0 inManagedObjectContext:(id)a1;

- (void)updateWithLearnedLocation:(id)a0;
- (id)mapItem;
- (void)setMapItem:(id)a0;

@end

@class NSUUID, NSData, NSArray, NSString, RTLearnedPlaceMO, RTMapItemExtendedAttributesMO, RTAddressMO, NSNumber, RTUserCurationMO;

@interface RTMapItemMO : RTCloudManagedObject

@property (retain, nonatomic) NSData *geoMapItemHandle;
@property (retain, nonatomic) NSData *geoMapItemIdentifier;
@property (copy, nonatomic) NSArray *businessHours;
@property (copy, nonatomic) NSNumber *mapItemSource;
@property (retain, nonatomic) RTAddressMO *address;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSNumber *categoryMUID;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *uncertainty;
@property (copy, nonatomic) NSNumber *referenceFrame;
@property (copy, nonatomic) NSNumber *mapItemPlaceType;
@property (copy, nonatomic) NSNumber *muid;
@property (copy, nonatomic) NSNumber *resultProviderID;
@property (retain, nonatomic) RTLearnedPlaceMO *place;
@property (copy, nonatomic) NSUUID *extendedAttributesIdentifier;
@property (copy, nonatomic) NSString *displayLanguage;
@property (nonatomic) BOOL disputed;
@property (retain, nonatomic) RTUserCurationMO *userCuration;
@property (retain, nonatomic) RTUserCurationMO *curationWhereOriginal;
@property (retain, nonatomic) RTMapItemExtendedAttributesMO *cachedExtendedAttributes;

+ (id)mapItemForIdentifier:(id)a0 error:(id *)a1;
+ (id)managedObjectWithMapItem:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)fetchRequest;
+ (id)managedObjectWithMapItem:(id)a0 inManagedObjectContext:(id)a1;
+ (id)fetchManagedObjectsForMapItem:(id)a0 predicate:(id)a1 inManagedObjectContext:(id)a2;
+ (void)updateDatabaseWithMapItem:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;

- (void)didSave;
- (id)extendedAttributes;
- (void)setExtendedAttributes:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end

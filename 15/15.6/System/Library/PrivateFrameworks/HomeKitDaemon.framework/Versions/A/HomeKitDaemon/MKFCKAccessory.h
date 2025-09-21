@class NSUUID, NSString, NSData, NSDate, NSSet, MKFCKHome, NSDictionary, MKFCKRoom, NSNumber;

@interface MKFCKAccessory : MKFCKHomeObject

@property (retain, nonatomic) NSDictionary *applicationData;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *initialCategory;
@property (copy, nonatomic) NSString *initialManufacturer;
@property (copy, nonatomic) NSString *initialModel;
@property (nonatomic) char isHosted;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) long long networkClientIdentifier;
@property (nonatomic) long long networkClientLAN;
@property (copy, nonatomic) NSUUID *networkRouterUUID;
@property (nonatomic) char ownerListeningHistoryEnabled;
@property (nonatomic) char ownerMediaContentProfileEnabled;
@property (nonatomic) char ownerPersonalRequestsEnabled;
@property (copy, nonatomic) NSString *productData;
@property (copy, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *allowedGuests;
@property (retain, nonatomic) NSSet *automations;
@property (retain, nonatomic) MKFCKHome *home;
@property (retain, nonatomic) MKFCKAccessory *hostAccessory;
@property (retain, nonatomic) NSSet *hostedAccessories;
@property (retain, nonatomic) NSSet *invitations;
@property (retain, nonatomic) MKFCKRoom *room;
@property (retain, nonatomic) NSSet *scenes;

+ (id)fetchRequest;

- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)isReadyToImportIntoLocalModelWithContext:(id)a0;

@end

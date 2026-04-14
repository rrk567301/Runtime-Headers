@class NSString, NSDictionary, NSData, NSNumber;

@interface MKFCKHAPAccessory : MKFCKAccessory

@property (copy, nonatomic) NSNumber *category;
@property (copy, nonatomic) NSNumber *certificationStatus;
@property (nonatomic) BOOL hasOnboardedForNaturalLighting;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSDictionary *serviceApplicationData;
@property (retain, nonatomic) NSDictionary *serviceAssociatedServiceTypes;
@property (retain, nonatomic) NSDictionary *serviceConfiguredNames;
@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (copy, nonatomic) NSString *uniqueIdentifier;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)fetchLocalModelWithContext:(id)a0;

@end

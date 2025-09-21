@class NSString, HMFPairingIdentity;

@interface MKFCKAirPlayAccessory : MKFCKAccessory

@property (nonatomic) short minimumUserPrivilege;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSString *password;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;

- (char)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)fetchLocalModelWithContext:(id)a0;
- (char)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (char)validateMinimumUserPrivilege:(id *)a0 error:(id *)a1;

@end

@class NSSet, NSString;

@interface SPRepairDeviceContext : NSObject

@property (retain, nonatomic) NSSet *findMyIds;
@property (retain, nonatomic) NSSet *serialNumbers;
@property (retain, nonatomic) NSSet *beaconIdentifiers;
@property (retain, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithMatchingFindMyIds:(id)a0 type:(id)a1;
- (id)initWithMatchingBeaconIdentifiers:(id)a0 type:(id)a1;
- (id)initWithMatchingSerialNumbers:(id)a0 type:(id)a1;

@end

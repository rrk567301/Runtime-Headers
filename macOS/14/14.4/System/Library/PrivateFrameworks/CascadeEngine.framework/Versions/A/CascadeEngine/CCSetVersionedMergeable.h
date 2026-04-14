@class NSString, CCSet, CCDeviceRecord, NSMutableDictionary, NSDictionary, NSObject, CCReplicatedStateEnumerator, NSNumber;
@protocol CCDatabaseReadOnlyAccess, CCDonateServiceProvider;

@interface CCSetVersionedMergeable : NSObject <CKVersionedMergeable> {
    CCSet *_set;
    NSString *_encodedSetDescriptors;
    CCDeviceRecord *_localDevice;
    NSObject<CCDatabaseReadOnlyAccess> *_readAccess;
    CCReplicatedStateEnumerator *_replicatedStateEnumerator;
    NSObject<CCDonateServiceProvider> *_donateServiceProvider;
    NSDictionary *_deviceRowIdToDeviceRecord;
    NSMutableDictionary *_deviceIdentifierToDistributedSiteIdentifier;
    NSMutableDictionary *_distributedSiteIdentifierToDeviceRowId;
}

@property (retain, nonatomic) NSNumber *setRowId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSet:(id)a0;
- (BOOL)mergeDeltas:(id)a0 error:(id *)a1;
- (id)mergeableDeltasForMetadata:(id)a0 error:(id *)a1;
- (id)stateVector;
- (id)initWithSet:(id)a0 readAccess:(id)a1 donateServiceProvider:(id)a2;
- (void)loadDeviceRecords;
- (BOOL)mergeDelta:(id)a0 fromDevice:(id)a1;
- (id)mergeableDeltaAfterStateVector:(id)a0 atomBatchVersion:(unsigned char)a1;

@end

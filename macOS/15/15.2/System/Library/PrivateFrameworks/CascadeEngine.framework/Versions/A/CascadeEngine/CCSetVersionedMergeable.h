@class NSURL, NSString, CCDatabaseSetStateReader, CCDatabaseDeviceMapping, NSObject, CCSet;
@protocol CCDonateServiceProvider;

@interface CCSetVersionedMergeable : NSObject <CKVersionedMergeable> {
    CCSet *_set;
    NSString *_encodedSetDescriptors;
    CCDatabaseSetStateReader *_stateReader;
    NSObject<CCDonateServiceProvider> *_donateServiceProvider;
    CCDatabaseDeviceMapping *_cachedDeviceMapping;
    NSURL *_mergeableDeltasFileURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)mergeDeltas:(id)a0 error:(id *)a1;
- (id)mergeableDeltasForMetadata:(id)a0 error:(id *)a1;
- (id)stateVector;
- (id)initWithSet:(id)a0 readAccess:(id)a1 donateServiceProvider:(id)a2 mergeableDeltasFileURL:(id)a3;
- (BOOL)mergeDelta:(id)a0 fromDevice:(id)a1;
- (id)mergeableDeltaAfterStateVector:(id)a0 atomBatchVersion:(unsigned char)a1;
- (id)mergeableDeltasForMetadata:(id)a0 atomBatchVersion:(unsigned char)a1 error:(id *)a2;

@end

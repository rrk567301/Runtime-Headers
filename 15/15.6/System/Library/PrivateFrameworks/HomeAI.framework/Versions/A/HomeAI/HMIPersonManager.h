@class NSUUID;
@protocol HMIPersonManagerDataSource;

@interface HMIPersonManager : HMFObject

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSUUID *homeUUID;
@property (weak, nonatomic) id<HMIPersonManagerDataSource> dataSource;
@property char supportsFaceClassification;
@property (getter=isPersonDataAvailableViaHomeKit) char personDataAvailableViaHomeKit;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (void)handleRemovedFaceprintWithUUID:(id)a0;
- (void)handleRemovedFaceCropWithUUID:(id)a0;
- (void)handleRemovedPersonWithUUID:(id)a0;
- (void)handleUpdatedFaceprint:(id)a0;
- (void)handleUpdatedPerson:(id)a0;
- (void)handleUpdatedPersonFaceCrop:(id)a0;
- (void)handleUpdatedUnassociatedFaceCrop:(id)a0;
- (id)initWithUUID:(id)a0 homeUUID:(id)a1;

@end

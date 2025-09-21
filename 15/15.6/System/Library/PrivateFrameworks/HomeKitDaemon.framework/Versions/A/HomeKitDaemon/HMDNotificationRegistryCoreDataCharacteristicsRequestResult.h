@class NSArray, HMDNotificationRegistryCoreDataCharacteristicsRequest;

@interface HMDNotificationRegistryCoreDataCharacteristicsRequestResult : HMFObject

@property (readonly) HMDNotificationRegistryCoreDataCharacteristicsRequest *coreDataRequest;
@property (readonly) char didSucceed;
@property (readonly) char didModify;
@property (readonly) char didModifyThresholdOnly;
@property (readonly) NSArray *modifiedCharacteristics;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoreDataRequest:(id)a0 didSucceed:(char)a1 didModify:(char)a2 didModifyThresholdOnly:(char)a3 modifiedCharacteristics:(id)a4;

@end

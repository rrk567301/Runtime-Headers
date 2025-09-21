@class NSUUID;

@interface HMIRemovePersonsModelOperation : HMFOperation

@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *homeUUID;
@property (readonly) char external;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)main;
- (id)logIdentifier;
- (id)initWithSourceUUID:(id)a0 homeUUID:(id)a1 external:(char)a2;
- (void)mainInsideAutoreleasePool;
- (void)removePersonsModelWithRetryOnError:(char)a0;

@end

@class NSUUID;

@interface HMIUpdatePersonsModelOperation : HMFOperation

@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *homeUUID;
@property (readonly) char external;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)main;
- (id)logIdentifier;
- (id)initWithSourceUUID:(id)a0 homeUUID:(id)a1 external:(char)a2;
- (void)mainInsideAutoreleasePool;
- (void)updatePersonsModelWithRetryOnError:(char)a0;

@end

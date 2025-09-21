@class NSUUID, _HMContext, NSURL, NSString;

@interface HMClientConnection : NSObject <HMFLogging>

@property (class, readonly, copy) NSUUID *UUID;
@property (class, readonly) BOOL areAnyAccessoriesConfigured;
@property (class, readonly) BOOL areAnyHomePodMiniConfigured;
@property (class, readonly) BOOL areAnyLargeHomePodConfigured;
@property (class, readonly) BOOL areAnyHomePodsConfigured;
@property (class, readonly) BOOL areAnyTelevisionAccessoriesConfigured;
@property (class, readonly) BOOL areAnyAppleTVAccessoriesConfigured;
@property (class, readonly) BOOL areHomesConfigured;
@property (class, readonly, copy) NSUUID *currentHomeUniqueIdentifier;
@property (class, readonly, copy) NSURL *siriHomeIdentifier;

@property (readonly, getter=areHomesConfigured) BOOL homesConfigured;
@property (readonly) _HMContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;
+ (id)siriCurrentHome;
+ (BOOL)areAnySpeakersConfigured;

- (id)init;
- (void).cxx_destruct;
- (void)fetchHH1EOLStatusForResidentDevice:(id)a0 completion:(id /* block */)a1;
- (id)initWithAreHomesConfigured:(BOOL)a0;
- (id)initWithContext:(id)a0 areHomesConfigured:(BOOL)a1;
- (id)initWithNoValidation;
- (void)requestSiriSyncDataWithValidity:(id)a0 completion:(id /* block */)a1;
- (void)sendSiriCommand:(id)a0 completionHandler:(id /* block */)a1;

@end

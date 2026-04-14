@class _CESRHomeKitNames, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface FetchHomeKitDataDelegate : NSObject <HMHomeManagerDelegate> {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly, copy, nonatomic) _CESRHomeKitNames *homeKitNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)initWithSemaphore:(id)a0;

@end

@class NSString, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface CRLanguageResourcesStack : NSObject

@property long long totalResources;
@property (retain) NSMutableArray *availableResources;
@property (retain) NSString *localeIdentifier;
@property (retain) NSObject<OS_dispatch_semaphore> *resourceCountSemaphore;
@property (retain) NSMutableSet *subscribers;
@property long long resourceType;

- (void).cxx_destruct;
- (void)removeSubscriber:(id)a0;
- (void)addSubscriber:(id)a0;
- (long long)subscriberCount;
- (id)initWithLocaleIdentifier:(id)a0 resourceType:(long long)a1;
- (id)popResource;
- (void)pushResource:(id)a0;
- (BOOL)hasSubscriber:(id)a0;

@end

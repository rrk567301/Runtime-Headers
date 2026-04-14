@class NSUUID, _HMContext, NSArray, NSString, HMFUnfairLock;
@protocol HMMediaDestination, HMMediaDestinationControllerDelegate, HMMediaDestinationControllerDataSource;

@interface HMMediaDestinationController : NSObject <HMFLogging, HMObjectMerge, HMFObject> {
    HMFUnfairLock *_lock;
}

@property (weak) id<HMMediaDestinationControllerDataSource> dataSource;
@property (retain) _HMContext *context;
@property (copy) NSUUID *destinationIdentifier;
@property (copy) NSArray *availableDestinationIdentifiers;
@property (weak) id<HMMediaDestinationControllerDelegate> delegate;
@property (readonly) NSUUID *identifier;
@property (readonly, copy) NSArray *availableDestinations;
@property (readonly) id<HMMediaDestination> destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)shortDescription;
+ (id)logCategory;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)callCompletionHandler:(id /* block */)a0;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)initWithIdentifier:(id)a0 destinationIdentifier:(id)a1 availableDestinationIdentifiers:(id)a2;
- (void)updateDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)callCompletionHandler:(id /* block */)a0 error:(id)a1;
- (BOOL)availableDestinationIdentifiersIsEqualToIdentifiers:(id)a0;
- (void)notifyDidUpdateDestination;
- (void)notifyDidUpdateAvailableDestinations;
- (id)initWithControllerData:(id)a0;
- (void)updateDestination:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureWithContext:(id)a0 dataSource:(id)a1;
- (void)unconfigure;

@end

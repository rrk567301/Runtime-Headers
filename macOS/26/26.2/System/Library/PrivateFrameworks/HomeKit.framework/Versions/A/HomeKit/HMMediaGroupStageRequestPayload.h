@class NSString, NSArray;

@interface HMMediaGroupStageRequestPayload : HMFObject <HMFLogging, HMMessageEncoding>

@property (class, readonly, copy) NSString *messageName;

@property (readonly, copy) NSArray *destinations;
@property (readonly, copy) NSArray *destinationControllersData;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (id)shortDescription;
- (id)privateDescription;
- (id)initWithPayload:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithDestinations:(id)a0 destinationControllersData:(id)a1 groups:(id)a2;
- (id)payloadCopy;

@end

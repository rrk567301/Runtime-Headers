@class NSUUID, NSString;

@interface HMDHTTPDevice : HMFObject <HMFLogging>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)shortDescription;
- (id)logIdentifier;
- (id)descriptionWithPointer:(BOOL)a0;

@end

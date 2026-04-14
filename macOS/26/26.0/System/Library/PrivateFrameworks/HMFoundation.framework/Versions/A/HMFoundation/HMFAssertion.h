@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *uniqueDescription;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)bundleIdentifier;

- (void)mark;
- (BOOL)acquire:(id *)a0;
- (void)dealloc;
- (void)invalidate;
- (id)attributeDescriptions;
- (id)init;
- (id)initWithName:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;

@end

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

- (BOOL)acquire:(id *)a0;
- (void)mark;
- (id)attributeDescriptions;
- (void)invalidate;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;

@end

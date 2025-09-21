@class NSString, NSNumber;

@interface ASDSystemAppRequest : ASDPersistentRequest

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *storeItemID;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;

- (id)initWithBundleID:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

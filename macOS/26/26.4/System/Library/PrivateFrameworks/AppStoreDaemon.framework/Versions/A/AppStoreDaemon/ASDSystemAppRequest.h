@class NSString, NSNumber;

@interface ASDSystemAppRequest : ASDPersistentRequest

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (nonatomic, getter=isOneShot) BOOL oneShot;
@property (nonatomic) BOOL suppressDialogs;
@property (copy, nonatomic) NSNumber *storeItemID;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (nonatomic, getter=isUserWaiting) BOOL userWaiting;

- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

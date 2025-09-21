@interface MAAutoAssetSetNotifications : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char atomicInstanceDiscovered;
@property (nonatomic) char atomicInstanceAvailableForUse;
@property (nonatomic) char lockUsageCheck;
@property (nonatomic) char filesystemSpaceCritical;
@property (nonatomic) char atomicInstancePurged;
@property (nonatomic) char downloadPending;
@property (nonatomic) char downloadProgress;
@property (nonatomic) char downloadAbandoned;
@property (nonatomic) char downloadedBecameIncomplete;

+ (id)notifyRegistrationName:(id)a0;
+ (id)notifyRegistrationName:(id)a0 forAssetSetIdentifier:(id)a1;

- (id)copy;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;

@end

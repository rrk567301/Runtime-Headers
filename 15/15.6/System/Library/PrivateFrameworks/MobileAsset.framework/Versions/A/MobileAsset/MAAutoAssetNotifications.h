@interface MAAutoAssetNotifications : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char newerVersionDiscovered;
@property (nonatomic) char checkForNewerFailure;
@property (nonatomic) char contentAvailableForUse;
@property (nonatomic) char contentVersionRevoked;
@property (nonatomic) char lockUsageCheck;
@property (nonatomic) char filesystemSpaceCritical;
@property (nonatomic) char assetPurged;
@property (nonatomic) char downloadPending;
@property (nonatomic) char downloadProgress;
@property (nonatomic) char downloadAbandoned;

+ (id)notifyRegistrationName:(id)a0 forAssetType:(id)a1;
+ (id)notifyRegistrationName:(id)a0 forAssetType:(id)a1 forAssetSpecifier:(id)a2;

- (id)copy;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)newSummaryDictionary;

@end

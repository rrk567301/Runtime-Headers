@class MAAutoAssetNotifications;

@interface MAAutoAssetInfoListen : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MAAutoAssetNotifications *activeNotifications;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)summary;
- (id)initWithNotifications:(id)a0;

@end

@class MAAutoAssetNotifications;

@interface MAAutoAssetInfoListen : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetNotifications *activeNotifications;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotifications:(id)a0;

@end

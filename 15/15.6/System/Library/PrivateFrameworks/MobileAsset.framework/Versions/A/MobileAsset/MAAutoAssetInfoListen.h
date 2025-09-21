@class MAAutoAssetNotifications;

@interface MAAutoAssetInfoListen : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetNotifications *activeNotifications;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithNotifications:(id)a0;

@end

@class MAAsset, NSString;

@interface WCAAsset : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long latestInstalledVersion;
@property (retain, nonatomic) MAAsset *latestInstalledAsset;
@property unsigned long long installedAssetVersion;
@property unsigned long long latestNotInstalledVersion;
@property (retain, nonatomic) MAAsset *latestNotInstalledAsset;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *extension;

+ (id)assetWithName:(id)a0 andExtension:(id)a1;
+ (id)beaconsDataAsset;
+ (id)wifiBehaviorPlistAsset;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

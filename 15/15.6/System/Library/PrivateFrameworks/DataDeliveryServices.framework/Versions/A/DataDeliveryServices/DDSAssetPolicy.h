@class NSSet, NSDateComponents, NSString;

@interface DDSAssetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDateComponents *idleUsageEvictionPeriod;
@property (nonatomic) long long preferredDownloadFrequency;
@property (nonatomic) char downloadOverCellular;
@property (nonatomic) char downloadWithoutPower;
@property (copy, nonatomic) NSSet *notificationDownloadTriggers;
@property (copy, nonatomic) NSString *downloadCompletionNotification;

+ (id)assetPolicy;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpDescription;
- (char)isEqualToAssetPolicy:(id)a0;
- (id)stringForAssetDownloadFrequency:(long long)a0;

@end

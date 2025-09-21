@class NSString;

@interface ATXAppDigestSetupEntity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) unsigned long long numBasicNotifications;
@property (nonatomic) unsigned long long numMessageNotifications;
@property (nonatomic) unsigned long long numTimeSensitiveNonMessageNotifications;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleId:(id)a0 numBasicNotifications:(unsigned long long)a1 numMessageNotifications:(unsigned long long)a2 numTimeSenstiveNonMessageNotifications:(unsigned long long)a3;

@end

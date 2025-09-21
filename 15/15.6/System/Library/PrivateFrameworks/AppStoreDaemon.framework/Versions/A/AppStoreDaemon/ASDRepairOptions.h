@class NSString, NSNumber, NSDictionary;

@interface ASDRepairOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char forceRevoke;
@property (nonatomic) char forceUpsell;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSNumber *accountDSID;
@property (readonly, nonatomic) long long claimStyle;
@property (nonatomic) unsigned long long exitReason;
@property (nonatomic) int fairplayStatus;
@property (nonatomic) char isBackground;
@property (copy, nonatomic) NSDictionary *relaunchOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;
- (id)initWithBundleID:(id)a0 accountIdentifier:(id)a1 claimStyle:(long long)a2;
- (id)initWithBundlePath:(id)a0;

@end

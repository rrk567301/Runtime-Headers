@class NSString, NSNumber;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *purgeableReason;
@property (readonly, nonatomic) long long purgeableType;
@property (readonly, nonatomic) long long staticDiskUsage;
@property (readonly, nonatomic) NSNumber *storeItemID;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)diagnosticDescription;

@end

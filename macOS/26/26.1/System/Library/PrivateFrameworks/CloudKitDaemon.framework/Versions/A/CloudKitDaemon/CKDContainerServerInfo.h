@class NSURL, NSString;

@interface CKDContainerServerInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *publicCloudDBURL;
@property (copy, nonatomic) NSURL *publicShareServiceURL;
@property (copy, nonatomic) NSURL *publicDeviceServiceURL;
@property (copy, nonatomic) NSURL *publicCodeServiceURL;
@property (copy, nonatomic) NSURL *publicMetricsServiceURL;
@property (copy, nonatomic) NSString *containerScopedUserID;
@property (copy, nonatomic) NSString *orgAdminUserID;
@property (nonatomic) long long environment;

- (id)CKPropertiesDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

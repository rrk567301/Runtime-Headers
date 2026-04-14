@class NSString, NSURL;

@interface AAPSyncAppIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, copy, nonatomic) NSURL *bundleURL;

- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppId:(id)a0 bundleURL:(id)a1;
- (BOOL)isMetaDataItemDelete;
- (id)siriIdentifier;

@end

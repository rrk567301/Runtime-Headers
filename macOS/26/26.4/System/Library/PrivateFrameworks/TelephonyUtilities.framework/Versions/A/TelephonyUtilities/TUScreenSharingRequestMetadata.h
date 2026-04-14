@class NSString;

@interface TUScreenSharingRequestMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *sceneID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToScreenSharingRequestMetadata:(id)a0;

@end

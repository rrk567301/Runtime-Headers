@class NSString;

@interface CXScreenSharingRequestMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *sceneID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;

@end

@class NSString;

@interface AKAuthenticatableResource : NSObject <AKAuthenticatableResourceProtocol, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSString *customShieldTitle;
@property (copy, nonatomic) NSString *customShieldDetailText;
@property (copy, nonatomic) NSString *customShieldAssetID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithResourceType:(long long)a0 resourceName:(id)a1;

@end

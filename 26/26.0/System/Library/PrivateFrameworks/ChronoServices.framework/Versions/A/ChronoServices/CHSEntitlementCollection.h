@class NSString;

@interface CHSEntitlementCollection : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL usesEventService;
@property (readonly, nonatomic) BOOL canOpenSystemURLs;
@property (readonly, nonatomic) BOOL canKeepAlive;
@property (readonly, nonatomic) BOOL invalidatesOnStorefrontChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)_initFromCollection:(id)a0;

@end

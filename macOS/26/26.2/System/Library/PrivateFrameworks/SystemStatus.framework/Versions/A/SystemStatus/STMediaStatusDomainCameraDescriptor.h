@class NSString;

@interface STMediaStatusDomainCameraDescriptor : NSObject <NSSecureCoding, BSDebugDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *cameraIdentifier;
@property (readonly, nonatomic, getter=isEligibleForPrivacyIndicator) BOOL eligibleForPrivacyIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCameraIdentifier:(id)a0 eligibleForPrivacyIndicator:(BOOL)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithCameraIdentifier:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end

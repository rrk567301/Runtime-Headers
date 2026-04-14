@class NSString;

@interface STMediaStatusDomainCameraDescriptor : NSObject <NSSecureCoding, BSDebugDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *cameraIdentifier;
@property (readonly, nonatomic, getter=isEligibleForPrivacyIndicator) BOOL eligibleForPrivacyIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCameraIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCameraIdentifier:(id)a0 eligibleForPrivacyIndicator:(BOOL)a1;
- (void).cxx_destruct;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;

@end

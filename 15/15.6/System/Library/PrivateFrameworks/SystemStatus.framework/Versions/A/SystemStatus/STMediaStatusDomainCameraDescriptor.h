@class NSString;

@interface STMediaStatusDomainCameraDescriptor : NSObject <NSSecureCoding, BSDebugDescriptionProviding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *cameraIdentifier;
@property (readonly, nonatomic, getter=isEligibleForPrivacyIndicator) char eligibleForPrivacyIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithCameraIdentifier:(id)a0;
- (id)initWithCameraIdentifier:(id)a0 eligibleForPrivacyIndicator:(char)a1;

@end

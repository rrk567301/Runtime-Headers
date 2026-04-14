@class STMediaStatusDomainCameraDescriptor, NSString, STActivityAttribution;

@interface STMediaStatusDomainCameraCaptureAttribution : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STMediaStatusDomainCameraDescriptor *cameraDescriptor;
@property (readonly, copy, nonatomic) STActivityAttribution *activityAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCameraDescriptor:(id)a0 activityAttribution:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;

@end

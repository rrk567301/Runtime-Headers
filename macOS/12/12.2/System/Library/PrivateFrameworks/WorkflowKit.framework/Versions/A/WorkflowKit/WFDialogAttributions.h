@class WFDialogAttribution;

@interface WFDialogAttributions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFDialogAttribution *defaultAttribution;
@property (readonly, nonatomic) WFDialogAttribution *workflowAttribution;
@property (readonly, nonatomic) WFDialogAttribution *privacyAttribution;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setDefaultAttribution:(id)a0;
- (void)setWorkflowAttribution:(id)a0;
- (void)setPrivacyAttribution:(id)a0;

@end

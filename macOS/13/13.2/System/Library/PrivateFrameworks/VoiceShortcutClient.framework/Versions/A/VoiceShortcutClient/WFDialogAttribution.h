@class NSString, WFIcon, WFWorkflowIcon;

@interface WFDialogAttribution : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) WFIcon *icon;

+ (id)attributionWithTitle:(id)a0 icon:(id)a1;
+ (id)attributionWithAppBundleIdentifier:(id)a0;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 icon:(id)a1;
- (id)initWithTitle:(id)a0 icon:(id)a1 workflowIcon:(id)a2;

@end

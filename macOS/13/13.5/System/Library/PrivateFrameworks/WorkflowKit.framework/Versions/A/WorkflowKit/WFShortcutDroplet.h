@class NSURL, WFFileRepresentation, WFWorkflowReference;

@interface WFShortcutDroplet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (readonly, nonatomic) WFFileRepresentation *bundle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReference:(id)a0 bundle:(id)a1;
- (id)initWithReference:(id)a0 bundleURL:(id)a1;

@end

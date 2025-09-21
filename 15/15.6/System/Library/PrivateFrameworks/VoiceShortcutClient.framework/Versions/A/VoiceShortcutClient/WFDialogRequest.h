@class WFWorkflowRunViewSource, NSString, LNDialog, WFDialogAttribution;

@interface WFDialogRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) NSString *promptForDisplay;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (nonatomic) char isLastAction;
@property (nonatomic) char requiresRunningShortcut;
@property (readonly, nonatomic) char shouldCenterPrompt;
@property (readonly, nonatomic) char destructive;
@property (readonly, nonatomic) char hasMultilineTextEntry;
@property (retain, nonatomic) LNDialog *linkDialog;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppBundleIdentifier:(id)a0 prompt:(id)a1;
- (id)initWithAttribution:(id)a0 prompt:(id)a1;
- (id)requestByCompactingRequest;

@end

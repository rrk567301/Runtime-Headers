@class NSString;

@interface WFSingleStepHomeScreenShortcutCompletionDialogRequest : WFDialogRequest <NSSecureCoding> {
    char _requiresRunningShortcut;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *applicationBundleIdentifier;

- (void).cxx_destruct;
- (char)requiresRunningShortcut;
- (void)setRequiresRunningShortcut:(char)a0;
- (id)initWithShortcutName:(id)a0 applicationBundleIdentifier:(id)a1;

@end

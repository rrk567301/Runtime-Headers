@class WFHomeWorkflow;

@interface HMShortcutAction : HMAction

@property (readonly) WFHomeWorkflow *shortcut;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupportedForHome:(id)a0;
+ (id)_actionWithInfo:(id)a0 home:(id)a1;

- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithShortcut:(id)a0;
- (id)_serializeForAdd;
- (BOOL)requiresDeviceUnlock;

@end

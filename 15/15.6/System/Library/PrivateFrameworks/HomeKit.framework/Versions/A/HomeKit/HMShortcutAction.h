@class NSData, WFHomeWorkflow;

@interface HMShortcutAction : HMAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WFHomeWorkflow *_shortcut;
    NSData *_shortcutData;
}

@property (readonly) WFHomeWorkflow *shortcut;

+ (char)supportsSecureCoding;
+ (char)isSupportedForHome:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (char)isValidWithError:(id *)a0;
- (id)initWithShortcut:(id)a0;
- (id)_serializeForAdd;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (char)mergeFromNewObject:(id)a0;
- (char)requiresDeviceUnlock;
- (id)shortcutData;

@end

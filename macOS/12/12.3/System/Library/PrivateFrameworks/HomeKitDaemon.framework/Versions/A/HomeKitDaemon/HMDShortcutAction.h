@class NSData, WFHomeWorkflowController, WFHomeWorkflow;

@interface HMDShortcutAction : HMDAction <NSCopying> {
    NSData *_shortcutData;
    WFHomeWorkflow *_shortcut;
    WFHomeWorkflowController *_controller;
}

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1 actionSet:(id)a2;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (Class)modelClass;
- (BOOL)requiresDeviceUnlock;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)initWithSerializedShortcut:(id)a0 uuid:(id)a1 actionSet:(id)a2;
- (id)stateDump;
- (unsigned long long)entitlementsForNotification;
- (id)removeShortcut;
- (void)executeWithSource:(unsigned long long)a0 clientName:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isUnsecuringAction;
- (id)associatedAccessories;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;

@end

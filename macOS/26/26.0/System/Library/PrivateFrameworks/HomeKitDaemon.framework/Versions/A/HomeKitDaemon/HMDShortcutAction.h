@class NSData, WFHomeWorkflowController, WFHomeWorkflow;

@interface HMDShortcutAction : HMDAction <NSCopying> {
    NSData *_shortcutData;
    WFHomeWorkflow *_shortcut;
    WFHomeWorkflowController *_controller;
}

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1 actionSet:(id)a2;

- (id)stateDump;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (Class)modelClass;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresDeviceUnlock;
- (id)associatedAccessories;
- (unsigned long long)entitlementsForNotification;
- (void)executeWithSource:(unsigned long long)a0 clientName:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;
- (id)initWithSerializedShortcut:(id)a0 uuid:(id)a1 actionSet:(id)a2;
- (BOOL)isAssociatedWithAccessory:(id)a0;
- (BOOL)isCompatibleWithAction:(id)a0;
- (BOOL)isStaleWithAccessory:(id)a0;
- (BOOL)isUnsecuringAction;
- (id)removeShortcut;

@end

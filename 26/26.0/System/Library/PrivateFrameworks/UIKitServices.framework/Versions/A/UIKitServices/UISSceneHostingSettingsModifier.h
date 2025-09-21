@class NSString;

@interface UISSceneHostingSettingsModifier : NSObject <BSXPCSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id /* block */)updaterForProposedSettings:(id)a0 withSettingsDiff:(id)a1;

@end

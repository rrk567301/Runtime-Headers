@interface KHAccessibilityManager : NSObject

+ (id)defaultManager;

- (void)notifyAccessibilityOfLayoutChange:(id)a0;
- (void)announceFilterChangedTo:(id)a0 projectType:(long long)a1 window:(id)a2;
- (void)announcePhotoBinClosed:(id)a0;
- (void)announcePhotoBinOpen:(id)a0;
- (void)announceOpenProjectBundle:(id)a0 window:(id)a1;
- (void)announceCreateProjectOfType:(long long)a0 window:(id)a1;
- (void)announceCreationOfProjectWithType:(long long)a0 window:(id)a1;
- (void)announceModifyProject:(id)a0 window:(id)a1;
- (void)announceProjectFormatChoosing:(long long)a0 window:(id)a1;
- (void)announceChooseThemeInWindow:(id)a0;
- (long long)defaultPriorityLevel;
- (void)_announceMessage:(id)a0 window:(id)a1;

@end

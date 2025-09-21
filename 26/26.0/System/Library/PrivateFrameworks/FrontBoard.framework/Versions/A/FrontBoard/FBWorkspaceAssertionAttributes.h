@class NSArray, RBSAttribute;

@interface FBWorkspaceAssertionAttributes : NSObject {
    NSArray *_fgLaunchAttributes;
    NSArray *_fgSupportLaunchAttributes;
    NSArray *_bgUserInitiatedAttributes;
    NSArray *_bgLaunchAttributes;
    NSArray *_utLaunchAttributes;
    NSArray *_bgUtilityAttributes;
    NSArray *_bgActiveAttributes;
    NSArray *_fgSuspendedAttributes;
    NSArray *_fgUtilityAttributes;
    NSArray *_fgNonFocalAttributes;
    NSArray *_fgFocalAttributes;
    NSArray *_nonUIAttributes;
    NSArray *_UIAttributes;
    NSArray *_opportunisticAttributes;
    NSArray *_utilityAttributes;
    NSArray *_activeAttributes;
    NSArray *_interactiveAttributes;
    NSArray *_focalAttributes;
    RBSAttribute *_maintainSelfForBGHosting;
    RBSAttribute *_maintainSelfForFGHosting;
    RBSAttribute *_activityLimitPreserveNonUI;
    RBSAttribute *_activityLimitActiveUI;
    RBSAttribute *_activityRunReasonSuspend;
    RBSAttribute *_activityRunReasonResume;
    RBSAttribute *_roleOpportunistic;
    RBSAttribute *_roleUtility;
    RBSAttribute *_roleNonUI;
    RBSAttribute *_roleUINonFocal;
    RBSAttribute *_roleUIFocal;
    RBSAttribute *_jetsamPriorityOpportunistic;
    RBSAttribute *_jetsamPriorityBackground;
    RBSAttribute *_jetsamPriorityUtility3;
    RBSAttribute *_jetsamPriorityUtility2;
    RBSAttribute *_jetsamPriorityUtility;
    RBSAttribute *_jetsamPriorityActive;
    RBSAttribute *_jetsamPriorityUISupport;
    RBSAttribute *_jetsamPriorityForegroundSupport;
    RBSAttribute *_jetsamPriorityForeground;
    RBSAttribute *_jetsamPriorityForegroundFocal;
    RBSAttribute *_visibility;
    RBSAttribute *_bootstrap;
    RBSAttribute *_fixedMinute;
    NSArray *_injectorAttributes;
    BOOL _usesLegacyAssertions;
}

- (void).cxx_destruct;

@end

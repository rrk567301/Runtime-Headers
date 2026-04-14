@class RBSAttribute, NSArray;

@interface FBWorkspaceAssertionAttributes : NSObject {
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
}

- (void).cxx_destruct;

@end

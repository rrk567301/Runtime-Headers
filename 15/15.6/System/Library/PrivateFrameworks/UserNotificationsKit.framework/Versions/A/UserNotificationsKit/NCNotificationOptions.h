@class NSSet, NSString;

@interface NCNotificationOptions : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSSet *alertSuppressionContexts;
@property (readonly, copy, nonatomic) NSString *alternateActionLabel;
@property (readonly, nonatomic) char dismissAutomatically;
@property (readonly, nonatomic) char dismissAutomaticallyForCarPlay;
@property (readonly, nonatomic) char overridesQuietMode;
@property (readonly, nonatomic) char overridesDowntime;
@property (readonly, nonatomic) char alertsWhenLocked;
@property (readonly, nonatomic) char addToLockScreenWhenUnlocked;
@property (readonly, nonatomic) unsigned long long lockScreenPersistence;
@property (readonly, nonatomic) unsigned long long lockScreenPriority;
@property (readonly, nonatomic) unsigned long long realertCount;
@property (readonly, nonatomic) char suppressesAlertsWhenAppIsActive;
@property (readonly, nonatomic) char canPlaySound;
@property (readonly, nonatomic) char canTurnOnDisplay;
@property (readonly, nonatomic) char requestsFullScreenPresentation;
@property (readonly, nonatomic) char preemptsPresentedNotification;
@property (readonly, nonatomic) char displaysActionsInline;
@property (readonly, nonatomic) char revealsAdditionalContentOnPresentation;
@property (readonly, nonatomic) char suppressesTitleWhenLocked;
@property (readonly, nonatomic) char suppressesSubtitleWhenLocked;
@property (readonly, nonatomic) char suppressesBodyWhenLocked;
@property (readonly, copy, nonatomic) NSString *speechLanguage;
@property (readonly, nonatomic) char playMediaWhenRaised;
@property (readonly, nonatomic) unsigned long long contentPreviewSetting;
@property (readonly, nonatomic) char canShowSummary;
@property (readonly, nonatomic) char silencedByMenuButtonPress;
@property (readonly, nonatomic) char overridesPocketMode;
@property (readonly, nonatomic) char hideClearActionInList;
@property (readonly, nonatomic, getter=isNumberOfLinesInfinite) char numberOfLinesInfinite;
@property (readonly, nonatomic) char coalescesWhenLocked;
@property (readonly, nonatomic) char preventsAutomaticLock;
@property (readonly, nonatomic) char revealsAdditionalContentIfNoDefaultAction;
@property (readonly, nonatomic) char lauchUsingSiriForCarPlayDefaultAction;
@property (readonly, nonatomic) char allowActionsForCarPlay;
@property (readonly, nonatomic) char hideCloseActionForCarPlay;
@property (readonly, nonatomic) char shouldAnnounceForCarPlay;
@property (readonly, nonatomic) char suppressPresentationInAmbient;
@property (readonly, nonatomic) char screenCaptureProhibited;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithNotificationOptions:(id)a0;

@end

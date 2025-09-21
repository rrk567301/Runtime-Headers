@class NSString, NSUUID, NSViewController, NCServiceViewService;
@protocol NCCustomAlertDelegate;

@interface NCCustomAlert : NSObject {
    NSUUID *_uuid;
    unsigned long long _sortOrder;
    NCServiceViewService *_viewService;
    id /* block */ _dismissalBlock;
    BOOL _markedForRemoval;
}

@property (weak) id<NCCustomAlertDelegate> delegate;
@property (readonly) NSViewController *contentViewController;
@property (readonly) NSString *hostIdentifier;
@property unsigned long long order;
@property char ignoresDND;
@property char ignoresDowntime;
@property char ignoresTopMargin;
@property char ignoresMenuBar;
@property char hidesNotificationCenter;
@property unsigned int preferredDisplay;
@property char shouldMuteByLockscreenSetting;
@property char displaysOnLockscreen;
@property char allowsSwipeToDismiss;
@property char handlesSwipeToDismissGesture;
@property char closable;
@property (copy) NSString *accessibilitySubRole;
@property (copy) NSString *accessibilityRoleDescription;
@property (copy) NSString *accessibilityIdentifier;
@property (copy) NSString *accessibilityLabel;

- (void).cxx_destruct;
- (void)setUuid:(id)a0;
- (id)uuid;
- (void)setViewService:(id)a0;
- (id)viewService;
- (void)present;
- (void)setSortOrder:(unsigned long long)a0;
- (BOOL)markedForRemoval;
- (void)setMarkedForRemoval:(BOOL)a0;
- (void)dismissWithAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (id /* block */)dismissalBlock;
- (id)initWithViewController:(id)a0 hostIdentifier:(id)a1;
- (void)makeKeyWithReady:(id /* block */)a0;
- (void)presentWithoutAnimatedTransition;
- (void)releaseKey;
- (void)setDismissalBlock:(id /* block */)a0;

@end

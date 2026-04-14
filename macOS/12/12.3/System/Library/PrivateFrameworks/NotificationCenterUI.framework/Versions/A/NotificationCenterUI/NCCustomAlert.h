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
@property BOOL ignoresDND;
@property BOOL ignoresDowntime;
@property BOOL displaysOnLockscreen;
@property BOOL allowsSwipeToDismiss;
@property BOOL closable;
@property (copy) NSString *accessibilitySubRole;
@property (copy) NSString *accessibilityRoleDescription;
@property (copy) NSString *accessibilityIdentifier;
@property (copy) NSString *accessibilityLabel;

- (void).cxx_destruct;
- (id)uuid;
- (void)setUuid:(id)a0;
- (id)viewService;
- (void)setViewService:(id)a0;
- (void)present;
- (void)setSortOrder:(unsigned long long)a0;
- (void)setMarkedForRemoval:(BOOL)a0;
- (BOOL)markedForRemoval;
- (void)setDismissalBlock:(id /* block */)a0;
- (id /* block */)dismissalBlock;
- (id)initWithViewController:(id)a0 hostIdentifier:(id)a1;
- (void)dismissWihAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissWithAnimation:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)makeKeyWithReady:(id /* block */)a0;
- (void)releaseKey;

@end

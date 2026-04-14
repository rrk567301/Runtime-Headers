@class SCRCUserDefaults;
@protocol SCRCursorAutoHideDelegate;

@interface SCRCursorAutoHideManager : NSObject

@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (weak, nonatomic) id<SCRCursorAutoHideDelegate> delegate;
@property (readonly, nonatomic) BOOL hidden;

- (void)reset;
- (void)dealloc;
- (void)_cancel;
- (id)initWithUserDefaults:(id)a0;
- (void).cxx_destruct;
- (void)_forceHideFocusRing;
- (void)_hideFocusRing;
- (void)_showFocusRing;

@end

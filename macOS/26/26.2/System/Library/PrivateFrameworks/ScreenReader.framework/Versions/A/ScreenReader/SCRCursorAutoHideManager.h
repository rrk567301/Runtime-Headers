@class SCRCUserDefaults;
@protocol SCRCursorAutoHideDelegate;

@interface SCRCursorAutoHideManager : NSObject

@property (retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults;
@property (weak, nonatomic) id<SCRCursorAutoHideDelegate> delegate;
@property (readonly, nonatomic) BOOL hidden;

- (void)_cancel;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (void)dealloc;
- (void)_forceHideFocusRing;
- (void)_hideFocusRing;
- (void)_showFocusRing;

@end

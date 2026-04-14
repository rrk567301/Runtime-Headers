@class NSDictionary;

@interface NSTrackingArea : NSObject <NSCopying, NSCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    id _owner;
    NSDictionary *_userInfo;
    unsigned long long _options;
    long long _privateFlags;
    id _reserved;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly) unsigned long long options;
@property (readonly, weak) id owner;
@property (readonly, copy) NSDictionary *userInfo;

+ (void)initialize;
+ (BOOL)_isTrackingAreaObject:(id)a0;
+ (void)_releaseTrackingTag:(long long)a0;
+ (void)_autoreleaseTrackingTag:(long long)a0;
+ (void)_retainTrackingTag:(long long)a0;
+ (id)_areaSendingMouseEntered;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void *)_userInfo;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_enabled;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 owner:(id)a2 userInfo:(id)a3;
- (void)mouseMoved:(id)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 pressureConfigurations:(id)a2 owner:(id)a3 userInfo:(id)a4;
- (void)_setInstalled:(BOOL)a0;
- (BOOL)_suppressFirstMouseEntered;
- (void)_setSuppressFirstMouseEntered:(BOOL)a0;
- (BOOL)_needsPressureConfigPushedToCG;
- (BOOL)_installed;
- (void)_sendMouseCancelledFromWindow:(id)a0;
- (BOOL)_uninstallPending;
- (BOOL)_suppressPressureConfiguration;
- (id)pressureConfigurations;
- (void)_setPressureConfigPushedToCG:(BOOL)a0;
- (void)_setInstallPending:(BOOL)a0;
- (void)_setEnabled:(BOOL)a0;
- (BOOL)_removed;
- (void)_mouseEntered:(id)a0;
- (void)_mouseExited:(id)a0;
- (void)_setUninstallPending:(BOOL)a0;
- (void)_setRemoved:(BOOL)a0;
- (void)_setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_forceInternalMouseExitIfNeeded;
- (BOOL)_installPending;
- (BOOL)_hasPressureConfigurations;
- (BOOL)_representsGestureRecognizers;
- (void)_setRepresentsGestureRecognizers:(BOOL)a0;
- (void)_setPressureConfigurations:(id)a0;
- (void)_setSuppressPressureConfiguration:(BOOL)a0;
- (void)_dispatchMouseEntered:(id)a0;
- (void)_installDelayedRolloverForMouseEnteredEvent:(id)a0;
- (void)_dispatchMouseExited:(id)a0;
- (void)_internalMouseExitedWork;
- (BOOL)_pressureConfigPushedToCG;
- (void)_doWork:(id /* block */)a0;
- (id)gestureBehaviors;
- (void)setGestureBehaviors:(id)a0;

@end

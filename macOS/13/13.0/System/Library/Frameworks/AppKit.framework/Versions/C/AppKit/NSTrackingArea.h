@class NSDictionary, NSCursor;

@interface NSTrackingArea : NSObject <NSCopying, NSCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    id _owner;
    NSDictionary *_userInfo;
    unsigned long long _options;
    long long _privateFlags;
    id _reserved;
}

@property (retain) NSCursor *cursor;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly) unsigned long long options;
@property (readonly, weak) id owner;
@property (readonly, copy) NSDictionary *userInfo;

+ (void)initialize;
+ (BOOL)_isTrackingAreaObject:(id)a0;
+ (void)_retainTrackingTag:(long long)a0;
+ (void)_releaseTrackingTag:(long long)a0;
+ (void)_autoreleaseTrackingTag:(long long)a0;
+ (id)_areaSendingMouseEntered;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void *)_userInfo;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_enabled;
- (void)mouseMoved:(id)a0;
- (void)_setEnabled:(BOOL)a0;
- (BOOL)_installed;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 pressureConfigurations:(id)a2 owner:(id)a3 userInfo:(id)a4;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 owner:(id)a2 userInfo:(id)a3;
- (void)_setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setInstallPending:(BOOL)a0;
- (BOOL)_installPending;
- (void)_setUninstallPending:(BOOL)a0;
- (BOOL)_uninstallPending;
- (void)_setInstalled:(BOOL)a0;
- (void)_setSuppressFirstMouseEntered:(BOOL)a0;
- (BOOL)_suppressFirstMouseEntered;
- (BOOL)_needsPressureConfigPushedToCG;
- (void)_setPressureConfigPushedToCG:(BOOL)a0;
- (BOOL)_pressureConfigPushedToCG;
- (void)_setSuppressPressureConfiguration:(BOOL)a0;
- (BOOL)_suppressPressureConfiguration;
- (void)_setRepresentsGestureRecognizers:(BOOL)a0;
- (BOOL)_representsGestureRecognizers;
- (BOOL)_hasPressureConfigurations;
- (void)_setRemoved:(BOOL)a0;
- (BOOL)_removed;
- (void)_doWork:(id /* block */)a0;
- (void)_installDelayedRolloverForMouseEnteredEvent:(id)a0;
- (void)_dispatchMouseEntered:(id)a0;
- (void)_mouseEntered:(id)a0;
- (void)_dispatchMouseExited:(id)a0;
- (void)_mouseExited:(id)a0;
- (void)_sendMouseCancelledFromWindow:(id)a0;
- (void)_forceInternalMouseExitIfNeeded;
- (void)_setPressureConfigurations:(id)a0;
- (id)pressureConfigurations;
- (id)gestureBehaviors;
- (void)setGestureBehaviors:(id)a0;

@end

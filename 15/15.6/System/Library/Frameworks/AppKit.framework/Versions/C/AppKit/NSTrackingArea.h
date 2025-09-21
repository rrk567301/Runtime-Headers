@class NSDictionary, NSCursor;

@interface NSTrackingArea : NSObject <NSCopying, NSCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    id _owner;
    NSDictionary *_userInfo;
    unsigned long long _options;
    struct { unsigned char _installPending : 1; unsigned char _uninstallPending : 1; unsigned char _installed : 1; unsigned char _enabled : 1; unsigned char _removed : 1; unsigned char _inside : 1; unsigned char _mouseEnteredSent : 1; unsigned char _suppressFirstMouseEntered : 1; unsigned char _needsPressureConfigPushedToCG : 1; unsigned char _pressureConfigPushedToCG : 1; unsigned char _suppressPressureConfiguration : 1; unsigned char _representsGestureRecognizers : 1; unsigned int _reserved : 20; } _privateFlags;
    id _reserved;
}

@property (readonly) NSCursor *cursor;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly) unsigned long long options;
@property (readonly, weak) id owner;
@property (readonly, copy) NSDictionary *userInfo;

+ (void)initialize;
+ (id)_areaSendingMouseEntered;
+ (void)_autoreleaseTrackingTag:(long long)a0;
+ (char)_isTrackingAreaObject:(id)a0;
+ (void)_releaseTrackingTag:(long long)a0;
+ (void)_retainTrackingTag:(long long)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void *)_userInfo;
- (void)_forceInternalMouseExitIfNeeded;
- (char)_installPending;
- (void)_dispatchMouseEntered:(id)a0;
- (void)_dispatchMouseExited:(id)a0;
- (void)_doWork:(id /* block */)a0;
- (char)_enabled;
- (char)_hasPressureConfigurations;
- (void)_installDelayedRolloverForMouseEnteredEvent:(id)a0;
- (char)_installed;
- (void)_mouseEntered:(id)a0;
- (void)_mouseExited:(id)a0;
- (char)_needsPressureConfigPushedToCG;
- (char)_pressureConfigPushedToCG;
- (char)_removed;
- (char)_representsGestureRecognizers;
- (void)_sendMouseCancelledFromWindow:(id)a0;
- (void)_setEnabled:(char)a0;
- (void)_setInstallPending:(char)a0;
- (void)_setInstalled:(char)a0;
- (void)_setPressureConfigPushedToCG:(char)a0;
- (void)_setPressureConfigurations:(id)a0;
- (void)_setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setRemoved:(char)a0;
- (void)_setRepresentsGestureRecognizers:(char)a0;
- (void)_setSuppressFirstMouseEntered:(char)a0;
- (void)_setSuppressPressureConfiguration:(char)a0;
- (void)_setUninstallPending:(char)a0;
- (char)_suppressFirstMouseEntered;
- (char)_suppressPressureConfiguration;
- (char)_uninstallPending;
- (id)gestureBehaviors;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 owner:(id)a2 userInfo:(id)a3;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1 pressureConfigurations:(id)a2 owner:(id)a3 userInfo:(id)a4;
- (void)mouseMoved:(id)a0;
- (id)pressureConfigurations;
- (void)setGestureBehaviors:(id)a0;

@end

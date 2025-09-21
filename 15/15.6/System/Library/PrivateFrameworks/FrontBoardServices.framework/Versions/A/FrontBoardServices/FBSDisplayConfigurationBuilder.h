@class FBSDisplayMode, NSString, NSSet, FBSDisplayConfiguration;

@interface FBSDisplayConfigurationBuilder : NSObject {
    FBSDisplayConfiguration *_configuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lock_uniqueIdentifier;
    FBSDisplayMode *_lock_currentMode;
    FBSDisplayMode *_lock_preferredMode;
    NSSet *_lock_otherModes;
    struct CGSize { double width; double height; } _lock_pixelSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lock_nativeBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lock_bounds;
    char _lock_geometrySet;
    char _lock_secure;
    char _lock_mainLike;
    char _lock_cloningSupported;
    char _lock_cloningSet;
    long long _lock_displayType;
    char _lock_displayTypeSet;
    long long _lock_overscanCompensation;
    struct CGSize { double width; double height; } _lock_safeOverscanRatio;
    char _lock_overscanned;
    char _lock_overscanSet;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setUniqueIdentifier:(id)a0;
- (void)setDisplayType:(long long)a0;
- (id)buildWithError:(out id *)a0;
- (id)_lock_sanitizedModeForMode:(id)a0;
- (id)buildConfigurationWithError:(out id *)a0;
- (void)setCloningNotSupported;
- (void)setCloningSupported:(char)a0;
- (void)setCurrentMode:(id)a0 preferredMode:(id)a1 otherModes:(id)a2;
- (void)setExpectsSecureRendering;
- (void)setOverscanned:(char)a0 compensation:(long long)a1 safeRatio:(struct CGSize { double x0; double x1; })a2;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })a0 nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setUIKitMainLike;

@end

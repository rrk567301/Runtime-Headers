@class FBSDisplayIdentity, NSString, FBSDisplayMode, NSSet, CADisplay;

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _nativeBounds;
    FBSDisplayMode *_preferredMode;
    NSSet *_otherModes;
    CADisplay *_immutableCADisplay;
    CADisplay *_caDisplay;
    int _pid;
    BOOL _noEqual_comparable;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int seed;
@property (readonly, nonatomic) long long tags;
@property (readonly, nonatomic, getter=isUIKitMainLike) BOOL UIKitMainLike;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *originatingConfiguration;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *identity;
@property (readonly, nonatomic, getter=isMainDisplay) BOOL mainDisplay;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly, nonatomic, getter=isCarDisplay) BOOL carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) BOOL carInstrumentsDisplay;
@property (readonly, copy, nonatomic) NSString *hardwareIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) FBSDisplayMode *currentMode;
@property (readonly, copy, nonatomic) FBSDisplayMode *preferredMode;
@property (readonly, copy, nonatomic) NSSet *availableModes;
@property (readonly, nonatomic, getter=isCloningSupported) BOOL cloningSupported;
@property (readonly, nonatomic, getter=isOverscanned) BOOL overscanned;
@property (readonly, nonatomic) long long overscanCompensation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } safeOverscanRatio;
@property (readonly, nonatomic) double nativeOrientation;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) double pointScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } renderingCenter;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) long long colorGamut;
@property (readonly, nonatomic) double latency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_virtualDisplayConfigurationWithIdentifier:(id)a0;

- (id)CADisplay;
- (BOOL)expectsSecureRendering;
- (id)initWithXPCDictionary:(id)a0;
- (id)caDisplay;
- (long long)_nativeRotation;
- (id)copyWithUniqueIdentifier:(id)a0;
- (double)scale;
- (BOOL)isVirtualized;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceBounds;
- (BOOL)isConnected;
- (id)uniqueID;
- (struct CGPoint { double x0; double x1; })nativeCenter;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)_nameForDisplayType;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithOverrideBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isHiddenDisplay;
- (id)immutableCADisplay;
- (id)init;
- (id)laterConfiguration:(id)a0;
- (BOOL)supportsExtendedColor;
- (double)orientation;
- (BOOL)isMainRootDisplay;
- (id)succinctDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nativeBounds;
- (id)copyForSecureRendering;
- (id)copyWithOverrideMode:(id)a0;
- (id)_initWithIdentity:(id)a0 hardwareIdentifier:(id)a1 name:(id)a2 deviceName:(id)a3 seed:(unsigned int)a4 comparable:(BOOL)a5 tags:(long long)a6 currentMode:(id)a7 preferredMode:(id)a8 otherModes:(id)a9 cloningSupported:(BOOL)a10 overscanned:(BOOL)a11 overscanCompensation:(long long)a12 safeOverscanRatio:(struct CGSize { double x0; double x1; })a13 pixelSize:(struct CGSize { double x0; double x1; })a14 nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a15 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a16 latency:(double)a17 originatingConfiguration:(id)a18 validityCheck:(long long)a19;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)_initWithImmutableDisplay:(id)a0 originalDisplay:(id)a1 assertIfInvalid:(BOOL)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned int)displayID;
- (id)initWithCoder:(id)a0;
- (id)initWithCADisplay:(id)a0;
- (id)copyWithOverrideMode:(id)a0 pixelSize:(struct CGSize { double x0; double x1; })a1 nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)wantsConnectionDebouncing;
- (id)uniqueIdentifier;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithCADisplay:(id)a0 isMainDisplay:(BOOL)a1;
- (void).cxx_destruct;

@end

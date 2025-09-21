@class FBSDisplayIdentity, NSString, FBSDisplayMode, NSSet, CADisplay;

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _nativeBounds;
    FBSDisplayMode *_preferredMode;
    NSSet *_otherModes;
    CADisplay *_immutableCADisplay;
    CADisplay *_caDisplay;
    int _pid;
    char _noEqual_comparable;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int seed;
@property (readonly, nonatomic) long long tags;
@property (readonly, nonatomic, getter=isUIKitMainLike) char UIKitMainLike;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *originatingConfiguration;
@property (readonly, copy, nonatomic) FBSDisplayIdentity *identity;
@property (readonly, nonatomic, getter=isMainDisplay) char mainDisplay;
@property (readonly, nonatomic, getter=isExternal) char external;
@property (readonly, nonatomic, getter=isCarDisplay) char carDisplay;
@property (readonly, nonatomic, getter=isCarInstrumentsDisplay) char carInstrumentsDisplay;
@property (readonly, copy, nonatomic) NSString *hardwareIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) FBSDisplayMode *currentMode;
@property (readonly, copy, nonatomic) FBSDisplayMode *preferredMode;
@property (readonly, copy, nonatomic) NSSet *availableModes;
@property (readonly, nonatomic, getter=isCloningSupported) char cloningSupported;
@property (readonly, nonatomic, getter=isOverscanned) char overscanned;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)type;
- (id)uniqueIdentifier;
- (double)scale;
- (id)uniqueID;
- (unsigned int)displayID;
- (char)isConnected;
- (double)orientation;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)CADisplay;
- (long long)_nativeRotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceBounds;
- (char)isHiddenDisplay;
- (id)_initWithIdentity:(id)a0 hardwareIdentifier:(id)a1 name:(id)a2 deviceName:(id)a3 seed:(unsigned int)a4 comparable:(char)a5 tags:(long long)a6 currentMode:(id)a7 preferredMode:(id)a8 otherModes:(id)a9 cloningSupported:(char)a10 overscanned:(char)a11 overscanCompensation:(long long)a12 safeOverscanRatio:(struct CGSize { double x0; double x1; })a13 pixelSize:(struct CGSize { double x0; double x1; })a14 nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a15 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a16 latency:(double)a17 originatingConfiguration:(id)a18 validityCheck:(long long)a19;
- (id)_initWithImmutableDisplay:(id)a0 originalDisplay:(id)a1 assertIfInvalid:(char)a2;
- (id)_nameForDisplayType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nativeBounds;
- (id)caDisplay;
- (id)copyForSecureRendering;
- (id)copyWithOverrideBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithOverrideMode:(id)a0;
- (id)copyWithOverrideMode:(id)a0 pixelSize:(struct CGSize { double x0; double x1; })a1 nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)copyWithUniqueIdentifier:(id)a0;
- (char)expectsSecureRendering;
- (id)immutableCADisplay;
- (id)initWithCADisplay:(id)a0;
- (id)initWithCADisplay:(id)a0 isMainDisplay:(char)a1;
- (char)isMainRootDisplay;
- (char)isVirtualized;
- (id)laterConfiguration:(id)a0;
- (struct CGPoint { double x0; double x1; })nativeCenter;
- (char)supportsExtendedColor;
- (char)wantsConnectionDebouncing;

@end

@class NSString, BSMutableSettings;

@interface FBSDisplayLayoutElement : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (nonatomic) long long level;
@property (nonatomic) BOOL fillsDisplayBounds;
@property (nonatomic, getter=isUIApplicationElement) BOOL UIApplicationElement;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasKeyboardFocus;
@property (readonly, copy, nonatomic) BSMutableSettings *otherSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)fallbackXPCEncodableClass;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)init;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setOtherSettings:(id)a0;

@end

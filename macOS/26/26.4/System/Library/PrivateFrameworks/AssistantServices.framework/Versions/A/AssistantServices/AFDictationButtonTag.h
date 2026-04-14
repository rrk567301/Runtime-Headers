@interface AFDictationButtonTag : UISSlotTag <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGPoint { double x; double y; } titleOrigin;
@property (nonatomic) unsigned int secureName;
@property (nonatomic) double titleWidth;
@property (nonatomic) long long contentScaleLevel;
@property (nonatomic) BOOL hasTrailingGutter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hitTestInformationMaskForStyle:(id)a0;
- (unsigned long long)authenticationMessageContextForStyle:(id)a0;
- (id)resolvedStyleForStyle:(id)a0;
- (unsigned int)secureNameForStyle:(id)a0;

@end

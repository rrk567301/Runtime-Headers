@interface SCRTextMarker : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) struct __AXTextMarker { } *marker;

+ (id)markerWithIndex:(unsigned long long)a0;
+ (id)markerWithAXTextMarker:(struct __AXTextMarker { } *)a0;
+ (BOOL)marker:(id)a0 precedesOrEqualsMarker:(id)a1 uiElement:(id)a2;
+ (unsigned long long)lengthFromMarker:(id)a0 toMarker:(id)a1 uiElement:(id)a2;
+ (BOOL)marker:(id)a0 precedesMarker:(id)a1 uiElement:(id)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIndex:(unsigned long long)a0;
- (id)initWithAXTextMarker:(struct __AXTextMarker { } *)a0;
- (id)markerByIncrementing;
- (id)markerByDecrementing;
- (BOOL)isValidForUIElement:(id)a0;
- (BOOL)isCompatibleWithMarker:(id)a0;
- (BOOL)isVisuallyEquivalentToTextMarker:(id)a0 uiElement:(id)a1;
- (id)debugDescriptionWithUIElement:(id)a0;
- (void)debugNodeDescriptionWithUIElement:(id)a0;
- (void)debugNodeTreeDescriptionWithUIElement:(id)a0;

@end

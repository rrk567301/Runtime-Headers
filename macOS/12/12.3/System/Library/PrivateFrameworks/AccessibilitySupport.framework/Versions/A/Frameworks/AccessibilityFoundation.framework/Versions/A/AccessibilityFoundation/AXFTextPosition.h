@interface AXFTextPosition : NSObject <NSCopying>

@property (class, readonly, nonatomic) AXFTextPosition *invalidPosition;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL isValid;

+ (id)positionWithIndex:(long long)a0;
+ (id)positionWithMarker:(const struct __AXTextMarker { } *)a0 uiElement:(id)a1;
+ (id)nameOfType:(long long)a0;
+ (id)NotFound;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isValid;
- (long long)compare:(id)a0;
- (long long)indexValue;
- (id)descriptionWithoutType;
- (BOOL)isCompatibleWithPosition:(id)a0;
- (long long)offsetFromPosition:(id)a0;
- (id)positionOffsetBy:(long long)a0 withinLimit:(id)a1;
- (const struct __AXTextMarker { } *)axTextMarkerValue;

@end

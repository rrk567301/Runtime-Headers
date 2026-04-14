@class NSColor, NSDictionary;

@interface AVTMaterial : NSObject

@property (retain, nonatomic) NSColor *baseColor;
@property (retain, nonatomic) NSDictionary *additionalPropertyColors;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToVFXMaterial:(id)a0;

@end

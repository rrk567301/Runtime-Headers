@class LNDisplayRepresentation, LNCodableValueType, LNCodableValue;

@interface WFLinkCodableValueContentItem : WFContentItem

@property (class, readonly, nonatomic) LNCodableValueType *valueType;

@property (retain, nonatomic) LNCodableValueType *codableValueType;
@property (readonly, nonatomic) LNCodableValue *codableValue;
@property (retain, nonatomic) LNDisplayRepresentation *displayRepresentation;

+ (BOOL)supportsSecureCoding;
+ (id)coercions;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)_localizedTypeDescriptionWithContext:(id)a0 pluralizationNumber:(long long)a1;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForCopying;
- (void)copyStateToItem:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end

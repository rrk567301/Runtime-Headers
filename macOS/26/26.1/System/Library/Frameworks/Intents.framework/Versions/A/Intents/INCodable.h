@class INCodableDescription, NSMutableDictionary;

@interface INCodable : PBCodable <INWidgetPlistRepresentable, NSCopying>

@property (retain, nonatomic) NSMutableDictionary *customValueForKeyDictionary;
@property (retain, nonatomic, setter=_setObjectDescription:) INCodableDescription *_objectDescription;

+ (BOOL)supportsSecureCoding;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;
- (unsigned long long)_UInt64ValueForAttribute:(id)a0;
- (void)_setObject:(id)a0 forAttribute:(id)a1;
- (BOOL)_boolValueForAttribute:(id)a0;
- (id)_dictionaryRepresentationWithNullValues:(BOOL)a0;
- (id)dictionaryRepresentation;
- (id)_valueForAttribute:(id)a0;
- (BOOL)_writeTo:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)_data;
- (void)setNilValueForAllKeys;
- (double)_doubleValueForAttribute:(id)a0;
- (BOOL)_readFrom:(id)a0 error:(id *)a1;
- (id)valueForUndefinedKey:(id)a0;
- (BOOL)_isStringAttribute:(id)a0 equalTo:(id)a1;
- (void)setValue:(id)a0 forPropertyNamed:(id)a1;
- (BOOL)_isAttribute:(id)a0 equalTo:(id)a1;
- (id)initWithCodableDescription:(id)a0 data:(id)a1;
- (long long)_int64ValueForAttribute:(id)a0;
- (id)data;
- (BOOL)isValidKey:(id)a0;
- (id)valueForPropertyNamed:(id)a0;
- (id)_dataWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (float)_floatValueForAttribute:(id)a0;
- (void)_setData:(id)a0 error:(id *)a1;
- (id)_copyWithZone:(struct _NSZone { } *)a0 error:(id *)a1;
- (void)_setEmptyArrayForNonNilRepeatedAttributes:(id)a0;
- (unsigned int)_UInt32ValueForAttribute:(id)a0;
- (id)_nonNilRepeatedAttributes;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCodableDescription:(id)a0 data:(id)a1 error:(id *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)_int32ValueForAttribute:(id)a0;
- (id)_nonNilAttributes;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)_valueForAttribute:(id)a0 ofClass:(Class)a1;
- (void)writeTo:(id)a0;

@end

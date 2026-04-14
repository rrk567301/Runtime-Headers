@interface PICurveControlPoint : NSObject <NSCopying>

@property (readonly, nonatomic) double x;
@property (readonly, nonatomic) double y;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithX:(double)a0 y:(double)a1 editable:(BOOL)a2;

@end

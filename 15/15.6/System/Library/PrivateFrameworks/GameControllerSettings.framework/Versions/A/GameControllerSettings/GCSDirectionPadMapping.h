@interface GCSDirectionPadMapping : GCSElementMapping

@property (nonatomic) char invertHorizontally;
@property (nonatomic) char invertVertically;
@property (nonatomic) char swapAxes;

+ (char)supportsSecureCoding;
+ (id)archivalClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonObject;
- (id)id;
- (char)isCustomized;
- (id)initWithJSONObject:(id)a0;
- (id)initWithElementKey:(id)a0 mappingKey:(id)a1 remappingOrder:(int)a2;
- (id)initWithElementKey:(id)a0 mappingKey:(id)a1 remappingOrder:(int)a2 invertHorizontally:(char)a3 invertVertically:(char)a4 swapAxes:(char)a5;

@end

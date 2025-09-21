@class INCodableDescription, INCodable, NSString;

@interface INCustomObject : INObject <INRuntimeObject>

@property (retain, nonatomic, setter=_setBackingStore:) INCodable *_backingStore;
@property (readonly, nonatomic) INCodableDescription *codableDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)valueForProperty:(id)a0;
- (char)setValue:(id)a0 forProperty:(id)a1;
- (id)_initWithCodableDescription:(id)a0;
- (char)_isValidKey:(id)a0;
- (id)initWithIntent:(id)a0 parameterName:(id)a1 reference:(id)a2;
- (id)initWithObject:(id)a0 codableDescription:(id)a1;

@end

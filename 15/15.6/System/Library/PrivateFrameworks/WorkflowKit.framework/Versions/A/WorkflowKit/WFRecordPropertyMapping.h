@class WFRecordProperty;

@interface WFRecordPropertyMapping : NSObject

@property (weak, nonatomic) id sourceObject;
@property (retain, nonatomic) WFRecordProperty *sourceProperty;
@property (weak, nonatomic) id destinationObject;
@property (retain, nonatomic) WFRecordProperty *destinationProperty;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (SEL)getterSelector;
- (SEL)setterSelector;
- (id)getterMethodSignature;
- (id)initWithSourceObject:(id)a0 property:(id)a1 destinationObject:(id)a2 property:(id)a3;
- (void)invokeGetterWithBuffer:(void **)a0 length:(unsigned long long *)a1;
- (void)invokeSetterWithBuffer:(void **)a0 length:(unsigned long long *)a1;
- (void)propagate;
- (void)propagate:(char)a0;
- (void)propagateUsingKVC;
- (void)propagateUsingSetter;
- (id)setterMethodSignature;

@end

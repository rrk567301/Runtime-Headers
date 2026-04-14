@class WFRecordProperty;

@interface WFRecordPropertyMapping : NSObject

@property (weak, nonatomic) id sourceObject;
@property (retain, nonatomic) WFRecordProperty *sourceProperty;
@property (weak, nonatomic) id destinationObject;
@property (retain, nonatomic) WFRecordProperty *destinationProperty;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (SEL)getterSelector;
- (SEL)setterSelector;
- (id)initWithSourceObject:(id)a0 property:(id)a1 destinationObject:(id)a2 property:(id)a3;
- (void)propagate:(BOOL)a0;
- (void)propagate;
- (void)propagateUsingSetter;
- (void)propagateUsingKVC;
- (id)getterMethodSignature;
- (id)setterMethodSignature;
- (void)invokeGetterWithBuffer:(void **)a0 length:(unsigned long long *)a1;
- (void)invokeSetterWithBuffer:(void **)a0 length:(unsigned long long *)a1;

@end

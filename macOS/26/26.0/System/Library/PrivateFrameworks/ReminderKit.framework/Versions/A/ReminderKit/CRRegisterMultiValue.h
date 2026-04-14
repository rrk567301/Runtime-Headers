@class CRSet, NSSet;

@interface CRRegisterMultiValue : CRRegister

@property (retain, nonatomic) CRSet *values;
@property (retain, nonatomic) NSSet *cachedValues;

- (void)setDocument:(id)a0;
- (id)initWithValues:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)setContents:(id)a0;
- (void)mergeWith:(id)a0;
- (id)contents;
- (id)description;
- (id)deltaSince:(id)a0 in:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCRCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCRCoder:(id)a0;
- (id)allContents;
- (id)initWithContents:(id)a0 document:(id)a1;
- (void)mergeWithRegisterMultiValue:(id)a0;

@end

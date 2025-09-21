@interface CRFormSelectableFieldOutputRegion : CRFormFieldOutputRegion

@property (readonly) unsigned long long selectableFieldType;

- (unsigned long long)fieldType;
- (id)copyWithZone:(struct _NSZone { } *)a0 copyChildren:(char)a1 copyCandidates:(char)a2 deepCopy:(char)a3;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0 version:(long long)a1 offset:(unsigned long long *)a2;
- (id)initWithQuad:(id)a0 type:(unsigned long long)a1 labelRegion:(id)a2 source:(unsigned long long)a3;
- (void)setSelectableFieldType:(unsigned long long)a0;

@end

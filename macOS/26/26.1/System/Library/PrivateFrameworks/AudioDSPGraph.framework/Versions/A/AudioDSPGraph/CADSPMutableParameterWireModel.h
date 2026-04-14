@interface CADSPMutableParameterWireModel : CADSPParameterWireModel

@property (nonatomic) unsigned int options;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setOptions:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBoxName:(id)a0 ofEndpoint:(unsigned int)a1;
- (void)setBoxParameterAddress:(struct CADSPParameterAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 ofEndpoint:(unsigned int)a1;

@end

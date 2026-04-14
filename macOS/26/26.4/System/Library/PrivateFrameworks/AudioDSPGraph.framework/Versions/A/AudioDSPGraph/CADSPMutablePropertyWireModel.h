@interface CADSPMutablePropertyWireModel : CADSPPropertyWireModel

@property (nonatomic) unsigned int options;

- (void)setOptions:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setBoxName:(id)a0 ofEndpoint:(unsigned int)a1;
- (void)setBoxPropertyAddress:(struct CADSPPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0 ofEndpoint:(unsigned int)a1;

@end

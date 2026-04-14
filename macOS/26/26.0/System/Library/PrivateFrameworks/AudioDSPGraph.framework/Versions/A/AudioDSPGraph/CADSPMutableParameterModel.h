@interface CADSPMutableParameterModel : CADSPParameterModel

@property (nonatomic) unsigned int ID;
@property (nonatomic) unsigned int direction;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setID:(unsigned int)a0;
- (void)setDirection:(unsigned int)a0;
- (void)setDefaultValue:(float)a0;
- (void)removeDefaultValue;

@end

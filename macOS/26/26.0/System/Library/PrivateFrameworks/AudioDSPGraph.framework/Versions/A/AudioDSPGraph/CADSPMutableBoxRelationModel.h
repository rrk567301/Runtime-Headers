@interface CADSPMutableBoxRelationModel : CADSPBoxRelationModel

@property (nonatomic) unsigned int type;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(unsigned int)a0;
- (void)setBoxName:(id)a0 ofEndpoint:(unsigned int)a1;

@end

@interface CADSPMutablePropertyModel : CADSPPropertyModel

@property (nonatomic) unsigned int ID;
@property (nonatomic) unsigned int direction;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setID:(unsigned int)a0;
- (void)setDirection:(unsigned int)a0;
- (void)removeDefaultValue;
- (void)setDefaultValueBytes:(const char *)a0 size:(unsigned long long)a1;

@end

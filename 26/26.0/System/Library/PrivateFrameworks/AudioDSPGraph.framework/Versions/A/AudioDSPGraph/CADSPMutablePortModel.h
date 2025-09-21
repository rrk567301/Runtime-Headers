@class NSString;

@interface CADSPMutablePortModel : CADSPPortModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int direction;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)setDirection:(unsigned int)a0;

@end

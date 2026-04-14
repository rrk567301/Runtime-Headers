@class NSString;

@interface CADSPMutablePortModel : CADSPPortModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int direction;

- (void)setName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setDirection:(unsigned int)a0;

@end

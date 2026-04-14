@class NSString;

@interface CADSPMutableJackModel : CADSPJackModel

@property (copy, nonatomic) NSString *name;

- (void)setName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end

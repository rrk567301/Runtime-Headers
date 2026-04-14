@class NSString;

@interface CADSPMutableJackModel : CADSPJackModel

@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end

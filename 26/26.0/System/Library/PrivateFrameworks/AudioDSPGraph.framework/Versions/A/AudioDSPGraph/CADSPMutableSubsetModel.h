@class NSString;

@interface CADSPMutableSubsetModel : CADSPSubsetModel

@property (copy, nonatomic) NSString *name;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;

@end

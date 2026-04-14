@class NSString;

@interface CADSPMutablePropertyConnectionModel : CADSPPropertyConnectionModel

@property (nonatomic) unsigned int graphPropertyID;
@property (copy, nonatomic) NSString *boxName;
@property (nonatomic) struct CADSPPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } boxPropertyAddress;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBoxName:(id)a0;
- (void)setBoxPropertyAddress:(struct CADSPPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (void)setGraphPropertyID:(unsigned int)a0;

@end

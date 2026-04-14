@class NSString;

@interface CADSPMutableParameterConnectionModel : CADSPParameterConnectionModel

@property (nonatomic) unsigned int graphParameterID;
@property (copy, nonatomic) NSString *boxName;
@property (nonatomic) struct CADSPParameterAddress { unsigned int x0; unsigned int x1; unsigned int x2; } boxParameterAddress;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBoxName:(id)a0;
- (void)setBoxParameterAddress:(struct CADSPParameterAddress { unsigned int x0; unsigned int x1; unsigned int x2; })a0;
- (void)setGraphParameterID:(unsigned int)a0;

@end

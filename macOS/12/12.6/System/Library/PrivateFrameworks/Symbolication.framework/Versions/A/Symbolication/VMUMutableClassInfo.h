@class NSString, VMUClassInfo;

@interface VMUMutableClassInfo : VMUClassInfo

@property (retain, nonatomic) VMUClassInfo *superclassInfo;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *binaryPath;
@property (nonatomic) BOOL isCoreMediaFigObject;
@property (nonatomic) unsigned int defaultScanType;
@property (nonatomic) unsigned int instanceSize;

- (void)setDisplayName:(id)a0;
- (void)setFields:(id)a0;
- (void)addFields:(id)a0;
- (void)addVariant:(id)a0 forField:(id)a1 withEvaluator:(id /* block */)a2;
- (void)setDefaultScanType:(unsigned int)a0;
- (void)mutateTypeFieldsWithBlock:(id /* block */)a0;
- (void)replaceField:(id)a0 withFields:(id)a1;
- (void)setVariantScanType:(unsigned int)a0 withEvaluator:(id /* block */)a1;
- (void)addVariantRecursively:(id)a0 forField:(id)a1 withEvaluator:(id /* block */)a2;
- (void)replaceFieldRecursively:(id)a0 withField:(id)a1;
- (void)addComplexAction:(id /* block */)a0 withEvaluator:(id /* block */)a1;
- (void)mutateTypeFieldsRecursivelyWithBlock:(id /* block */)a0;
- (void)setInstanceSize:(unsigned int)a0;
- (void)setSuperclassInfo:(id)a0;
- (void)setBinaryPath:(id)a0;
- (void)setIsCoreMediaFigObject:(BOOL)a0;

@end

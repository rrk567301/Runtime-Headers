@interface KNPlaceholderInfo : TSWPShapeInfo

+ (Class)classForUnarchiver:(id)a0;

- (BOOL)isEmpty;
- (int)kind;
- (Class)layoutClass;
- (Class)repClass;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (BOOL)shouldHideEmptyBullets;
- (BOOL)displaysInstructionalText;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)copyAsShapeInfoWithContext:(id)a0;
- (BOOL)isAllowedInGroups;
- (id)defaultInstructionalText;
- (BOOL)remainsInDocumentWhenDeletedFromChildInfos;
- (BOOL)shouldDisplayTextAsTypeName;

@end

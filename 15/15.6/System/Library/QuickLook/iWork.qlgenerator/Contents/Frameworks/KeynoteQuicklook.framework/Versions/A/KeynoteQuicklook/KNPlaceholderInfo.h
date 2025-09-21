@interface KNPlaceholderInfo : TSWPShapeInfo

+ (Class)classForUnarchiver:(id)a0;

- (char)isEmpty;
- (int)kind;
- (Class)layoutClass;
- (Class)repClass;
- (char)autoListRecognition;
- (char)autoListTermination;
- (char)displaysInstructionalText;
- (char)shouldHideEmptyBullets;
- (void)saveToArchiver:(id)a0;
- (id)copyAsShapeInfoWithContext:(id)a0;
- (id)defaultInstructionalText;
- (char)isAllowedInGroups;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (char)remainsInDocumentWhenDeletedFromChildInfos;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (char)shouldDisplayTextAsTypeName;

@end

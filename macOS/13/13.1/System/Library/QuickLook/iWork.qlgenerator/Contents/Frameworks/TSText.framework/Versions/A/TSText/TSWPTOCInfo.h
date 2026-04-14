@class NSArray, NSSet, NSString, TSWPTOCSettings, TSWPTOCPartitioner;

@interface TSWPTOCInfo : TSWPShapeInfo <TSWPTextualEquivalentProvider> {
    TSWPTOCPartitioner *_partitioner;
}

@property (retain, nonatomic, setter=setTOCEntries:) NSArray *tocEntries;
@property (readonly, nonatomic) NSArray *visibleTOCEntries;
@property (retain, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings;
@property (nonatomic) BOOL shouldSyncTOCSettingsWithTOCNavigator;
@property (retain, nonatomic) NSArray *pageNumberRanges;
@property (readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPartitionInline;

- (void).cxx_destruct;
- (BOOL)isSelectable;
- (unsigned int)elementKind;
- (void)acceptVisitor:(id)a0;
- (id)copyWithContext:(id)a0;
- (Class)repClass;
- (BOOL)textIsVertical;
- (id)referencedStyles;
- (Class)editorClass;
- (id)partitioner;
- (BOOL)supportsAttachedComments;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)supportsDropCapsInChildStorages;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (BOOL)wantsPositionFixedWhenCopying;
- (id)textualEquivalent;
- (void)i_setTOCEntries:(id)a0;
- (void)i_setTOCSettings:(id)a0;
- (id)containedStorageFormattedUsingParagraphStyle:(id)a0;
- (id)containedStorageFormattedUsingParagraphStyles;
- (BOOL)p_startingTOCIsRTLForEntries:(id)a0;
- (void)resetStorageStyles;
- (void)regenerateStorageContent;
- (void)loadTOCInfoMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveTOCInfoMessage:(void *)a0 archiver:(id)a1;

@end

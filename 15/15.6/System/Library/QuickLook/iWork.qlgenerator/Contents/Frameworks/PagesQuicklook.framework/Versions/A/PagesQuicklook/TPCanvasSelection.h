@class NSSet, NSString;

@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection> {
    NSSet *mInfos;
    NSSet *mExcludedInfos;
    NSSet *mAdditionalInfos;
}

@property (readonly, nonatomic) unsigned long long canvasSelectionKind;
@property (readonly, nonatomic) NSSet *rawInfos;
@property (readonly, nonatomic) NSSet *rawExcludedInfos;
@property (readonly, nonatomic) NSSet *rawAdditionalInfos;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *unlockedInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)archivedSelectionClass;
+ (id)emptySelection;
+ (id)canvasSelectionFromCanvasSelection:(id)a0 withToggledInfo:(id)a1;
+ (id)canvasSelectionFromSelection:(id)a0;
+ (id)canvasSelectionFromSelection:(id)a0 withInfos:(id)a1;
+ (id)selectionWithInfos:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfos:(id)a0;
- (char)containsKindOfClass:(Class)a0;
- (char)containsUnlockedKindOfClass:(Class)a0;
- (id)copyExcludingInfo:(id)a0;
- (id)copyIncludingInfo:(id)a0;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithNewType:(long long)a0;
- (id)copyWithNewType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 head:(unsigned long long)a1 tail:(unsigned long long)a2;
- (id)infosOfClass:(Class)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)UUIDDescription;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)p_commonCopyTo:(id)a0;
- (id)copyWithNewStyleInsertionBehavior:(long long)a0 newCaretAffinity:(long long)a1;
- (id)copyWithVisualRanges:(id)a0 headCharIndex:(unsigned long long)a1 tailCharIndex:(unsigned long long)a2 rightToLeft:(char)a3 sameLine:(char)a4;
- (id)initWithTextSelection:(id)a0 infos:(id)a1 excludedInfos:(id)a2 additionalInfos:(id)a3;
- (id)initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(long long)a2 caretAffinity:(long long)a3 leadingEdge:(char)a4 leadingCharIndex:(unsigned long long)a5 infos:(id)a6 excludedInfos:(id)a7 additionalInfos:(id)a8;
- (id)initWithType:(long long)a0 ranges:(id)a1 validVisualRanges:(char)a2 styleInsertionBehavior:(long long)a3 caretAffinity:(long long)a4 caretIsLeadingEdge:(char)a5 leadingCharIndex:(unsigned long long)a6 headCharIndex:(unsigned long long)a7 tailCharIndex:(unsigned long long)a8;
- (id)initWithType:(long long)a0 ranges:(id)a1 validVisualRanges:(char)a2 styleInsertionBehavior:(long long)a3 caretAffinity:(long long)a4 leadingEdge:(char)a5 leadingCharIndex:(unsigned long long)a6 headCharIndex:(unsigned long long)a7 tailCharIndex:(unsigned long long)a8 infos:(id)a9 excludedInfos:(id)a10 additionalInfos:(id)a11;
- (id)p_UUIDDescriptionsForInfosSet:(id)a0;

@end

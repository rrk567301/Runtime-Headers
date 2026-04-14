@class NSString, TSDCommentStorage, NSDate, TSKAnnotationAuthor;

@interface TSWPFloatingCommentInfo : TSWPShapeInfo <TSDComment, TSKAnnotationParent> {
    TSDCommentStorage *_commentStorage;
}

@property (retain, nonatomic) TSDCommentStorage *commentStorage;
@property (readonly, nonatomic) double commentScalingMultiplier;
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly, nonatomic) BOOL isHighlight;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (readonly, nonatomic) NSString *parentUUID;
@property (readonly, nonatomic) int annotationType;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)upgradeCommentInfoStyle:(id)a0;
+ (void)upgradeCommentInfoStorage:(id)a0;
+ (void)upgradeCommentParagraphStylesForStylesheet:(id)a0 withCommentScale:(double)a1;
+ (id)bezierPathForExportCommentOutline;
+ (id)commentStyleIdentifier;
+ (id)p_defaultCommentInfoStyleInStylesheet:(id)a0;
+ (id)commentParagraphStyleIdentifierForFontSize:(unsigned long long)a0;
+ (id)commentParagraphStyleForStylesheet:(id)a0;
+ (id)commentParagraphStyleForStylesheet:(id)a0 scalingMultiplier:(double)a1;
+ (id)p_commentParagraphStyleForStylesheet:(id)a0 fontSize:(unsigned long long)a1;
+ (void)createCommentInfoStyleInStylesheetIfNeeded:(id)a0;
+ (struct CGSize { double x0; double x1; })commentInitialSizeWithContext:(id)a0;
+ (id)p_commentInfoWithContext:(id)a0 geometry:(id)a1 storage:(id)a2;
+ (id)commentInfoWithContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1 storage:(id)a2;
+ (id)p_defaultStroke;
+ (id)p_defaultPadding;
+ (id)p_defaultFill;
+ (id)p_defaultShadow;

- (void).cxx_destruct;
- (unsigned int)elementKind;
- (id)typeName;
- (id)annotationWithUUID:(id)a0;
- (id)copyWithContext:(id)a0;
- (id)creationDateString;
- (Class)layoutClass;
- (BOOL)isLockable;
- (Class)repClass;
- (Class)editorClass;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (BOOL)supportsHyperlinks;
- (BOOL)supportsAttachedComments;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3 wpStorage:(id)a4;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (BOOL)isAllowedInGroups;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (BOOL)isInDocument;
- (void)enumerateAllAnnotationsInModelWithHitBlock:(id /* block */)a0;
- (BOOL)isFloatingComment;
- (void)commentWillBeAddedToDocumentRoot;
- (double)transformGeometryRatioForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)pathSourceForExportCommentOutline;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3 commentStorage:(id)a4;
- (id)initWithContext:(id)a0 geometry:(id)a1 style:(id)a2 pathSource:(id)a3 wpStorage:(id)a4 commentStorage:(id)a5;

@end

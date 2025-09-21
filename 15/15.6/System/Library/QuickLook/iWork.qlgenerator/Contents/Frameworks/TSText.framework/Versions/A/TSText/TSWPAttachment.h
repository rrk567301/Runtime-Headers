@class NSString, TSWPStorage;

@interface TSWPAttachment : TSPObject <TSWPStorageActionObjectProtocol, TSKDocumentObject, TSDOwningAttachment, TSPCopying, TSKModel>

@property (weak, nonatomic) TSWPStorage *parentStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char isDrawable;
@property (readonly, nonatomic) char isAnchored;
@property (readonly, nonatomic) char isPartitioned;
@property (readonly, nonatomic) char isAttachedToBodyText;
@property (readonly, nonatomic) char isSearchable;
@property (readonly, nonatomic) char specifiesEnabledKnobMask;
@property (readonly, nonatomic) char isHorizontallyCentered;
@property (readonly, nonatomic) char isVerticallyCentered;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (unsigned long long)attributeArrayKind;
+ (id)mostSpecificAttachmentFromInfo:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned int)elementKind;
- (id)copyWithContext:(id)a0;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (char)changesWithPageCount;
- (unsigned long long)findCharIndex;
- (void)infoChanged;
- (id)topLevelAttachment;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)performTemplateLocalization:(id)a0;
- (unsigned long long)findCharIndexWithHintIndex:(unsigned long long *)a0;
- (void)migrateStyleWithDocumentRoot:(id)a0;
- (id)objectsForStyleMigrating;
- (char)preserveAttributesOverSelectionWhenInserting;
- (char)shouldInvalidateWhenTextPropertiesChange;
- (char)supportsUUID;

@end

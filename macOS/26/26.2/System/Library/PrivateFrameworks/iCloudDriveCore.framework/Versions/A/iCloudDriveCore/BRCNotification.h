@class NSString, BRCAppLibrary, BRCItemGlobalID, BRFileObjectID, NSSet, NSURL;

@interface BRCNotification : BRQueryItem

@property (readonly, nonatomic) BRCAppLibrary *appLibrary;
@property (readonly, nonatomic) NSString *aliasSourceAppLibraryID;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCItemGlobalID *parentGlobalID;
@property (readonly, nonatomic) BRFileObjectID *oldParentFileObjectID;
@property (readonly, nonatomic) NSString *oldAppLibraryID;
@property (retain, nonatomic) NSSet *parentGlobalIDs;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isInDocumentScope;
@property (readonly, nonatomic) BOOL isInDataScope;
@property (readonly, nonatomic) BOOL isInTrashScope;
@property (readonly, nonatomic) BOOL isDocumentsFolder;

+ (BOOL)supportsSecureCoding;
+ (id)notificationGatheredFromItem:(id)a0;
+ (id)notificationFromItem:(id)a0;

- (id)initRootContainerNotificationWithSessionContext:(id)a0;
- (void)_populateExtendedAttributesForItem:(id)a0;
- (void)merge:(id)a0;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocalItem:(id)a0 itemDiffs:(unsigned long long)a1;
- (void)setNumberAttribute:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)markAsLoserVersionWithEtag:(id)a0 modificationDate:(id)a1 editorNameComponents:(id)a2 lastEditorDeviceName:(id)a3 size:(id)a4;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (void)generateLogicalExtension:(id)a0 physicalExtension:(id)a1;
- (id)subclassDescription;
- (BOOL)canMerge:(id)a0;

@end

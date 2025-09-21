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
@property (readonly, nonatomic) char isInDocumentScope;
@property (readonly, nonatomic) char isInDataScope;
@property (readonly, nonatomic) char isInTrashScope;
@property (readonly, nonatomic) char isDocumentsFolder;

+ (char)supportsSecureCoding;
+ (id)notificationFromItem:(id)a0;
+ (id)notificationGatheredFromItem:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)merge:(id)a0;
- (char)canMerge:(id)a0;
- (id)subclassDescription;
- (void)generateLogicalExtension:(id)a0 physicalExtension:(id)a1;
- (id)initRootContainerNotificationWithSessionContext:(id)a0;
- (id)initWithLocalItem:(id)a0 itemDiffs:(unsigned long long)a1;
- (void)markAsLoserVersionWithEtag:(id)a0 modificationDate:(id)a1 editorNameComponents:(id)a2 lastEditorDeviceName:(id)a3 size:(id)a4;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (void)setNumberAttribute:(id)a0 forKey:(id)a1;

@end

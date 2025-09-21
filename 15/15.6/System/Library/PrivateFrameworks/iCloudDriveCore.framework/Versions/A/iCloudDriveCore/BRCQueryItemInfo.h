@interface BRCQueryItemInfo : NSObject

@property (readonly, nonatomic) char isZoneRoot;
@property (readonly, nonatomic) char isCloudDocsAppLibrary;
@property (readonly, nonatomic) char isAppInstalled;
@property (readonly, nonatomic) char isWallet;
@property (readonly, nonatomic) char isContainerWithContentPolicyDownloadLazilyAndEvictOnRemoteUpdate;
@property (readonly, nonatomic) char isGreedyDocument;
@property (readonly, nonatomic) char isDocumentsFolder;
@property (readonly, nonatomic) char isDocumentScopePublic;

+ (id)queryItemInfoForAppLibraryRoot:(id)a0;
+ (id)queryItemInfoForAppLibraryDocumentsFolder:(id)a0;
+ (id)queryItemInfoForItem:(id)a0;

@end

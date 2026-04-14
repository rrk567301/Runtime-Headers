@interface BRCQueryItemInfo : NSObject

@property (readonly, nonatomic) BOOL isZoneRoot;
@property (readonly, nonatomic) BOOL isDefaultZone;
@property (readonly, nonatomic) BOOL isAppInstalled;
@property (readonly, nonatomic) BOOL isWallet;
@property (readonly, nonatomic) BOOL isWhatsApp;
@property (readonly, nonatomic) BOOL isGreedyDocument;
@property (readonly, nonatomic) BOOL isDocumentsFolder;

+ (id)queryItemInfoForAppLibrary:(id)a0;
+ (id)queryItemInfoForDocumentsFolderWithAppLibrary:(id)a0;
+ (id)queryItemInfoForItem:(id)a0;

@end

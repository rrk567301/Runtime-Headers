@class NSString, BRCZoneRowID, BRCALRowID;

@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {
    BRCALRowID *_appLibraryRowID;
    BRCZoneRowID *_zoneRowID;
    unsigned char _kind;
    unsigned char _uuid[16];
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isNonDesktopRoot;
@property (readonly, nonatomic) char isDocumentsFolder;
@property (readonly, nonatomic) char isSharedZoneRoot;
@property (readonly, nonatomic) NSString *itemIDString;
@property (readonly, nonatomic) const char *UTF8String;
@property (readonly, nonatomic) BRCALRowID *appLibraryRowID;
@property (readonly, nonatomic) BRCZoneRowID *sharedZoneRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { } *)a0 atIndex:(int)a1;
+ (id)newFromSqliteValue:(struct sqlite3_value { } *)a0;
+ (id)appLibraryRowIDFromRootOrDocumentsSQLiteValue:(struct sqlite3_value { } *)a0;
+ (id)defaultDesktopItemID;
+ (id)defaultDocumentsItemID;
+ (id)documentsItemIDWithAppLibraryRowID:(id)a0;
+ (char)isAppLibraryRootItemIDWithSQLiteValue:(struct sqlite3_value { } *)a0;
+ (char)isDocumentsItemIDWithSQLiteValue:(struct sqlite3_value { } *)a0;
+ (char)isRootItemIDWithSQLiteValue:(struct sqlite3_value { } *)a0;
+ (char)isSharedZoneRootItemIDWithSQLiteValue:(struct sqlite3_value { } *)a0;
+ (char)migrateItemIDsToVersion11WithDB:(id)a0 serverTruth:(char)a1;
+ (char)migrateItemIDsToVersion5WithDB:(id)a0 serverTruth:(char)a1;
+ (char)migrateItemIDsToVersion8WithDB:(id)a0 serverTruth:(char)a1;
+ (id)parseMangledItemIDString:(id)a0 mangledID:(id *)a1 etag:(id *)a2 session:(id)a3;
+ (id)shareAliasRecordIDFromTargetItemID:(id)a0 zone:(id)a1 hasDerivedShareAlias:(char)a2;
+ (id)structureRecordPrefixForItemType:(char)a0 targetZoneShared:(char)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(const char *)a0;
- (id)initWithUUIDString:(id)a0;
- (id)initWithItemID:(id)a0;
- (char)isEqualToItemID:(id)a0;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (id)initWithRootObject:(struct RootItemObject { unsigned char x0; union { unsigned int x0; unsigned int x1; } x1; } *)a0;
- (id)_directoryRecordNameWithSession:(id)a0;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)a0;
- (id)_initAsZoneRootWithZoneRowID:(id)a0;
- (id)contentsRecordIDInZoneID:(id)a0;
- (id)debugItemIDString;
- (id)debugItemIDStringWithVerbose:(char)a0;
- (id)derivedAliasItemIDWithOwnerName:(id)a0;
- (id)directoryReferenceInZone:(id)a0 action:(unsigned long long)a1;
- (id)directoryStructureRecordIDInZone:(id)a0;
- (id)documentStructureRecordIDInZoneID:(id)a0;
- (id)initAsDocumentsWithAppLibraryRowID:(id)a0;
- (id)initWithAliasUUID:(id)a0;
- (id)initWithString:(id)a0 libraryRowID:(id)a1 sharedZoneRowID:(id)a2;
- (id)itemUUIDString;
- (id)pcsChainDocumentStructureReferenceInZoneID:(id)a0;
- (id)pcsChainParentReferenceInZone:(id)a0;
- (id)sideCarRecordIDWithZone:(id)a0;
- (id)sideCarRecordNameWithZone:(id)a0;
- (id)structureRecordIDForItemType:(char)a0 zone:(id)a1 aliasTargetZoneIsShared:(char)a2;
- (id)validatingDirectoryReferenceInZone:(id)a0;
- (id)zoneUniqueItemIDStringWithSession:(id)a0;

@end

@interface AVTArchiverBasedStorePersistence : NSObject

+ (id)currentVersion;
+ (char)isFileNotFoundError:(id)a0;
+ (char)_createStoreEmptyFileIfNeededAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (char)_createStoreFolderIfNeededAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (char)_createStoreIfNeededAtLocation:(id)a0 logger:(id)a1 error:(id *)a2;
+ (id)_migrateDifferentAvatarKitVersionsForContent:(id)a0 logger:(id)a1;
+ (char)_migrateFromPre0_5ToCurrentForStoreAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (char)_migrateFromPre0_6ToCurrentForStoreAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (char)_performMigrationIfNeededForStoreAtLocation:(id)a0 logger:(id)a1 fileManager:(id)a2 error:(id *)a3;
+ (id)_readContentFromDiskAtLocation:(id)a0 logger:(id)a1 error:(id *)a2;
+ (char)_writeContent:(id)a0 toDiskAtLocation:(id)a1 logger:(id)a2 error:(id *)a3;
+ (char)contentExistsAtLocation:(id)a0;
+ (id)dbLocationForStoreLocation:(id)a0;
+ (id)readContentFromDiskAtLocation:(id)a0 logger:(id)a1 error:(id *)a2;
+ (id)readVersionForStoreAtLocation:(id)a0 error:(id *)a1;
+ (char)removeFilesAtLocation:(id)a0 error:(id *)a1;
+ (char)writeContent:(id)a0 toDiskAtLocation:(id)a1 logger:(id)a2 error:(id *)a3;
+ (char)writeVersion:(id)a0 toDiskAtLocation:(id)a1 error:(id *)a2;

@end

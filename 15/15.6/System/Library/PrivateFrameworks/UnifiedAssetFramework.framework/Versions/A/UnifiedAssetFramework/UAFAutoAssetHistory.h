@interface UAFAutoAssetHistory : NSObject

+ (char)_createHistoryDirIfNeeded:(id)a0 error:(id *)a1;
+ (id)_getAutoAssetSetInfo:(id)a0 entries:(id)a1 includeAssetVersion:(char)a2;
+ (id)_getPersistAssetInfoPath;
+ (char)_persistAssetSetInfo:(id)a0 assetSetIdentifier:(id)a1 isEliminating:(char)a2 jsonData:(id)a3 error:(id *)a4;
+ (char)_writeAssetInfoToFile:(id)a0 data:(id)a1 filePath:(id)a2 error:(id *)a3;
+ (id)getPersistedAssetInfo;
+ (void)persistAssetSetInfoConfiguring:(id)a0 entries:(id)a1 isEliminating:(char)a2 reason:(id)a3;
+ (void)persistAssetSetInfoLocked:(id)a0 atomicEntries:(id)a1 autoAssetSet:(id)a2 isEliminating:(char)a3 reason:(id)a4;

@end

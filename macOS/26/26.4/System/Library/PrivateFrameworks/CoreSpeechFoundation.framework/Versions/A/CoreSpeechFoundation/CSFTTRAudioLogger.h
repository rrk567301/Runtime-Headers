@interface CSFTTRAudioLogger : NSObject

+ (void)recordedAudioAvailableAt:(id)a0 requestId:(id)a1 filenamePostfix:(long long)a2;
+ (id)_extractRequestIDFromPlistData:(id)a0;
+ (id)_convertToPostfixStringFrom:(long long)a0;
+ (id)_createTTRAudioFileName:(id)a0 requestId:(id)a1 postfix:(id)a2 extension:(id)a3;
+ (BOOL)_deleteFile:(id)a0 fileName:(id)a1;
+ (id)_extractRequestIdFromFileName:(id)a0;
+ (id)_findAudioFileForRequestID:(id)a0 inDirectory:(id)a1;
+ (id)_findAudioFileWithRequestId:(id)a0 inFileNames:(id)a1;
+ (id)_getAudioFilePathForRequestID:(id)a0 inDirectory:(id)a1;
+ (id)_getExtendedAttribute:(id)a0 forFilePath:(id)a1;
+ (id)_getExtendedAttributesForFilePath:(id)a0;
+ (id)_getFileNamesInDirectory:(id)a0;
+ (BOOL)_isAudioFile:(id)a0;
+ (BOOL)_isPlistDataRecent:(id)a0;
+ (BOOL)_isValidDirectoryPath:(id)a0;
+ (id)_loggingQueue;
+ (BOOL)_purgeOldFilesInDirectory:(id)a0;
+ (id)_readTTRAudioInfoPlistInDirectory:(id)a0;
+ (id)_removeExtensionFromFileName:(id)a0;
+ (id)_renameSyncedFileIfNeeded:(id)a0;
+ (BOOL)_setExtendedAttribute:(id)a0 value:(id)a1 forFilePath:(id)a2;
+ (BOOL)_setExtendedAttributes:(id)a0 forFilePath:(id)a1;
+ (BOOL)_shouldKeepFile:(id)a0 cutoffDate:(id)a1;
+ (BOOL)_shouldProcessFile:(id)a0;
+ (id)_timeStampStringFromFileURL:(id)a0;
+ (id)findTTRAssistantAudioFilePath;
+ (id)gatherTTRAudioFilePaths;
+ (id)metadataForAudioFilePath:(id)a0;
+ (BOOL)purgeTTRAudioLogDirectory;
+ (void)purgeTTRAudioLogDirectoryWithCompletion:(id /* block */)a0;
+ (id)transcriptForAudioFilePath:(id)a0;
+ (void)writeMetadataForRequestId:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;

@end

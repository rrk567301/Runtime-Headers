@class NSString;

@interface ATXClientModelCacheFileHandler : NSObject <ATXClientModelCacheFileHandlerProtocol> {
    NSString *_cacheFileBasePath;
    NSString *_clientModelId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readSuggestionsFromCacheFromReadOnlyFileHandle:(id)a0;
+ (id)unarchiveCacheFileFromReadOnlyFileHandle:(id)a0;
+ (id)clientModelIdFromFileName:(id)a0;

- (id)cacheFilePath;
- (BOOL)writeSerializedDataToCacheFile:(id)a0;
- (id)serializeSuggestionsData:(id)a0;
- (id)initWithCacheFileBasePath:(id)a0 clientModelId:(id)a1;
- (id)readSuggestionsFromCache;
- (BOOL)deleteCachedSuggestionsFile;
- (void).cxx_destruct;
- (BOOL)createCacheFileForClientModelCacheUpdate:(id)a0;
- (id)readOnlyFileHandleForSuggestionsCache;

@end

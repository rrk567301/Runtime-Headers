@class NSString;

@interface PPContactDiskCache : NSObject {
    long long _lastCreatedAt;
    NSString *_path;
}

- (id)initWithPath:(id)a0;
- (BOOL)isEmpty;
- (id)path;
- (void).cxx_destruct;
- (id)init;
- (id)_cacheObjectFromFilePath:(id)a0 error:(id *)a1;
- (BOOL)iterNameRecordCacheWithError:(id *)a0 block:(id /* block */)a1;

@end

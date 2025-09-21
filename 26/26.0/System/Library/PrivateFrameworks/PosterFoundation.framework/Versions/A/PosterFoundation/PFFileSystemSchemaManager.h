@class NSURL, NSFileManager;

@interface PFFileSystemSchemaManager : NSObject

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSFileManager *fileManager;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBaseURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteEndpoint:(id)a0 error:(out id *)a1;
- (id)enumeratorForEndpoint:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2 errorHandler:(id /* block */)a3;
- (id)initWithBaseURL:(id)a0 fileManager:(id)a1;
- (BOOL)prepareFileSystemForEndpoints:(id)a0 error:(out id *)a1;
- (id)resolveEndpoint:(id)a0;

@end

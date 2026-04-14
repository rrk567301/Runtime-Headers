@class NSURL, NSMutableArray;

@interface SecureMemoryIndex : NSObject

@property (retain, nonatomic) NSURL *resourcePath;
@property (retain, nonatomic) NSMutableArray *mIndexes;
@property (retain, nonatomic) NSMutableArray *mIndexData;
@property (nonatomic) unsigned long long memoryIndexCount;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)indexCount;
- (id)_santizedIndexName:(id)a0;
- (id)initWithResourcePath:(id)a0 memoryIndexes:(id)a1;
- (void)insertMemoryIndex:(id)a0 resource:(id)a1;
- (void)insertMemoryIndex:(const char *)a0 resource:(const float *)a1 size:(unsigned int)a2;
- (void)iterateMemoryIndexes:(id /* block */)a0;
- (id)makeResources;

@end

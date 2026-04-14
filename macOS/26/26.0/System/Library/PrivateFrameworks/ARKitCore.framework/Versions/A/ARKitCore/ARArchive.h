@class NSArray, NSMutableDictionary;

@interface ARArchive : NSObject {
    NSMutableDictionary *_dataByPath;
}

@property (readonly, copy, nonatomic) NSArray *filePaths;

- (id)dataRepresentation;
- (id)initWithData:(id)a0 error:(id *)a1;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void)addData:(id)a0 withFilename:(id)a1 extension:(id)a2;
- (struct archive { } *)_createArchiveForReading;
- (BOOL)_loadArchiveFromMemory:(id)a0 error:(id *)a1;
- (BOOL)_loadArchiveFromURL:(id)a0 error:(id *)a1;
- (BOOL)_readDataForEntry:(struct archive_entry { } *)a0 archive:(struct archive { } *)a1;
- (BOOL)_readDataFromArchive:(struct archive { } *)a0;
- (BOOL)_writeToArchive:(struct archive { } *)a0;
- (void)addData:(id)a0 withPath:(id)a1;
- (id)dataForResource:(id)a0 withExtension:(id)a1;
- (id)dataForResourceAtPath:(id)a0;
- (void)removeDataWithFilename:(id)a0 extension:(id)a1;
- (void)removeDataWithPath:(id)a0;

@end

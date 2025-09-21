@class NSURL, NSArray;

@interface SMUDataTemplateCopier : NSObject

@property (readonly) unsigned long long totalSymlinkedItems;
@property (readonly) unsigned long long totalDuplicateItems;
@property (readonly, copy) NSURL *systemURL;
@property (readonly, copy) NSURL *dataTemplateURL;
@property (copy) id /* block */ logHandler;
@property (copy) id /* block */ progressHandler;
@property (readonly, copy) NSArray *symlinkedFilePatterns;
@property (readonly, copy) NSArray *symlinkedDirectoryPatterns;
@property (readonly) char hasDataTemplateBOM;
@property (readonly) unsigned long long totalItems;
@property (readonly) unsigned long long totalBytes;

- (id)init;
- (void).cxx_destruct;
- (void)log:(id)a0;
- (id)systemVersionDictionary;
- (char)_shouldSymlinkPath:(const char *)a0 isDirectory:(char)a1;
- (char)_copyDataTemplateIfNeededToURL:(id)a0 error:(id *)a1 progress:(id /* block */)a2;
- (void)_enumerateDataTemplateBOM:(struct _BOMBom { } *)a0 block:(id /* block */)a1;
- (struct _BOMBom { } *)_openDataTemplateBOM;
- (struct _BOMBom { } *)_openDataTemplateBOMForWritingToPath:(const char *)a0;
- (char)_writeDataTemplateReceiptBOMToURL:(id)a0 error:(id *)a1;
- (char)_writeDataTemplateReceiptIfNeededToURL:(id)a0 error:(id *)a1;
- (char)_writeDataTemplateReceiptPlistToURL:(id)a0 error:(id *)a1;
- (void)analyzeDataTemplate;
- (void)analyzeDataTemplateIfNeeded;
- (char)copyDataTemplateToURL:(id)a0 error:(id *)a1;
- (char)copyDataTemplateToURL:(id)a0 error:(id *)a1 progress:(id /* block */)a2;
- (id)dataTemplateBOMURL;
- (id)initWithSystemURL:(id)a0;
- (void)loadSymlinkedPatterns;
- (void)loadSymlinkedPatternsIfNeeded;
- (void)log:(id)a0 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;
- (char)shouldSymlinkPath:(id)a0 isDirectory:(char)a1;
- (id)symlinkedPatternsManifestURL;

@end

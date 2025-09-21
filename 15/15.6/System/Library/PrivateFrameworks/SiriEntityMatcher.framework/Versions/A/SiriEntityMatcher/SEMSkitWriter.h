@class NSURL, SEMSkitInfo;

@interface SEMSkitWriter : NSObject <SEMSkitWriteAccess> {
    NSURL *_directoryURL;
    SEMSkitInfo *_info;
    struct unique_ptr<semskitbridge::Indexer, std::default_delete<semskitbridge::Indexer>> { struct __compressed_pair<semskitbridge::Indexer *, std::default_delete<semskitbridge::Indexer>> { struct Indexer *__value_; } __ptr_; } _indexer;
    char _inTransaction;
}

@property (readonly, nonatomic) unsigned long long flushThreshold;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (char)clearWithError:(id *)a0;
- (char)cleanup:(id *)a0;
- (char)removeItemWithExternalId:(id)a0 error:(id *)a1;
- (char)_beginTransactionWithError:(id *)a0;
- (char)addCascadeSharedItemContent:(id)a0 allMetaContent:(id)a1 sourceIdentifier:(id)a2 personaIdentifier:(id)a3 externalId:(id)a4 error:(id *)a5;
- (char)commitChanges:(char *)a0 error:(id *)a1;
- (unsigned short)indexFeatures;
- (long long)indexLocale;
- (id)initWithSkitDirectoryURL:(id)a0 dataProtectionClass:(int)a1 flushThreshold:(unsigned long long)a2;
- (char)rollbackChanges:(id *)a0;
- (char)setTransactionIndexFeatures:(unsigned short)a0 error:(id *)a1;
- (char)setTransactionLocale:(long long)a0 assetPath:(id)a1 error:(id *)a2;
- (char)shouldMerge:(char *)a0 error:(id *)a1;

@end

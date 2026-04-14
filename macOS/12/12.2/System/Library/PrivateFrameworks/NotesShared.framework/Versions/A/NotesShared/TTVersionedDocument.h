@class NSUUID;

@interface TTVersionedDocument : NSObject

@property (nonatomic) void *documentArchive;
@property (readonly, nonatomic) NSUUID *replicaID;
@property (readonly, nonatomic) unsigned long long futureVersionCount;

+ (unsigned int)serializationVersion;
+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)versionedDocumentSerializationVersion;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadArchive:(const void *)a0;
- (id)serialize;
- (void)saveToArchive:(void *)a0;
- (void)loadData:(id)a0;
- (void)loadDocumentArchive:(void *)a0;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (void)saveCurrentVersion:(void *)a0;
- (unsigned long long)mergeWithVersionedDocument:(id)a0;
- (unsigned int)maxDocumentVersion;
- (id)initWithData:(id)a0 replicaID:(id)a1;
- (id)initWithArchive:(const void *)a0 replicaID:(id)a1;

@end

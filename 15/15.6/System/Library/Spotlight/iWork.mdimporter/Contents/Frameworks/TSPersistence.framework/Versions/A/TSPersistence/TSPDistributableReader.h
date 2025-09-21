@class NSString, TSPDatabase, TSPDistributableFileManager;

@interface TSPDistributableReader : NSObject <TSPStreamingDistributableUnarchiver> {
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    char _hasReadTangierVersionRoot;
    _Atomic char _isCancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)readCheckCrcFromArchiveInputStream:(id)a0 crc:(unsigned int *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)cancel;
- (char)_initializeNewDocumentDirectory:(id)a0;
- (char)handleArchivedVersions:(struct { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (char)handleClassInfoWithClassType:(int)a0 className:(id)a1 isProtobufClass:(char)a2 error:(id *)a3;
- (char)handleFileDescriptorProtoWithInputStream:(id)a0 length:(unsigned int)a1 error:(id *)a2;
- (char)handleObjectWithIdentifier:(long long)a0 fileStateIdentifier:(id)a1 version:(unsigned int)a2 classType:(int)a3 stream:(id)a4 length:(long long)a5 relationshipTargets:(long long *)a6 relationshipCount:(unsigned int)a7 error:(id *)a8;
- (id)initWithDestinationPath:(id)a0;
- (char)readFromDistributableArchiveStream:(id)a0 estimatedDataLength:(long long)a1 supplementalDataBundle:(id)a2 error:(id *)a3;

@end

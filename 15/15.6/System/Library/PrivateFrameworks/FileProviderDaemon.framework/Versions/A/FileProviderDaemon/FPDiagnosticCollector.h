@class NSURL, NSMutableDictionary;

@interface FPDiagnosticCollector : NSObject {
    int _fd;
    struct fsid { int val[2]; } _fsid;
    unsigned long long _ino;
    unsigned int _docid;
    NSURL *_parentURL;
    NSURL *_trashURL;
    unsigned long long _stepsNeeded;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *diagnostic;

+ (unsigned long long)getStringCharactersSet:(id)a0;

- (void).cxx_destruct;
- (char)_collectFnameAttributesWithError:(id *)a0;
- (char)_collectInodeAttributesWithError:(id *)a0;
- (char)_collectMountAttributesWithError:(id *)a0;
- (char)_collectParentACLCountWithError:(id *)a0;
- (char)_collectPurgeAttributesWithError:(id *)a0;
- (char)_collectXattrAttributesWithError:(id *)a0;
- (char)_collectdocIDAttributesWithError:(id *)a0;
- (char)_performStep:(unsigned long long)a0 error:(id *)a1;
- (char)_tryReadFirstByteOfFileWithError:(id *)a0;
- (char)collectDiagnosticDiskAttributesWithError:(id *)a0;
- (id)initWithFD:(int)a0 trashURL:(id)a1;

@end

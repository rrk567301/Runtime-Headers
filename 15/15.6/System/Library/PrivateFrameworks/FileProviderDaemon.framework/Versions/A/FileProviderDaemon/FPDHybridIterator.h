@class FPDDomain, FPItem, FPDIterator, NSURL, FPDDiskIterator;

@interface FPDHybridIterator : FPDIterator {
    FPItem *_rootItem;
    NSURL *_rootURL;
    FPDDomain *_domain;
    char _done;
    unsigned long long _totalDatalessFoldersPopped;
    char _enforceFPItem;
    char _insideADatalessFolder;
    FPDIterator *_datalessFolderIterator;
    FPDDiskIterator *_diskIterator;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)error;
- (char)done;
- (id)nextWithError:(id *)a0;
- (id)initWithItem:(id)a0 domain:(id)a1 enforceFPItem:(char)a2;
- (unsigned long long)numFoldersPopped;

@end

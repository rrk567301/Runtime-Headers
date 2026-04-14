@class FPDDomain, FPItem, FPDIterator, NSURL, FPDDiskIterator;

@interface FPDHybridIterator : FPDIterator {
    FPItem *_rootItem;
    NSURL *_rootURL;
    FPDDomain *_domain;
    BOOL _done;
    unsigned long long _totalDatalessFoldersPopped;
    BOOL _enforceFPItem;
    BOOL _insideADatalessFolder;
    FPDIterator *_datalessFolderIterator;
    FPDDiskIterator *_diskIterator;
}

- (void)dealloc;
- (id)error;
- (void).cxx_destruct;
- (BOOL)done;
- (id)initWithItem:(id)a0 domain:(id)a1 enforceFPItem:(BOOL)a2;
- (id)nextWithError:(id *)a0;
- (unsigned long long)numFoldersPopped;

@end

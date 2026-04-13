@class FPItem, FPDIterator, NSURL, FPDProvider;

@interface FPDHybridIterator : FPDIterator {
    FPItem *_rootItem;
    NSURL *_rootURL;
    FPDProvider *_provider;
    BOOL _done;
    unsigned long long _totalDatalessFoldersPopped;
    BOOL insideADatalessFolder;
    FPDIterator *datalessFolderIterator;
    FPDIterator *diskIterator;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)error;
- (BOOL)done;
- (id)nextWithError:(id *)a0;
- (unsigned long long)numFoldersPopped;
- (id)initWithItem:(id)a0 provider:(id)a1;

@end

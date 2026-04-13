@class NSURL, NSError;

@interface FPDDiskIterator : FPDIterator {
    NSURL *_rootURL;
    BOOL _stopAccessingRoot;
    BOOL _sentRoot;
    BOOL _lastItemWasPackage;
    BOOL _done;
    NSError *_error;
    unsigned long long _numFoldersPopped;
    struct __CFURLEnumerator { } *_enumerator;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)error;
- (BOOL)done;
- (id)initWithURL:(id)a0 isDirectory:(BOOL)a1;
- (id)nextWithError:(id *)a0;
- (unsigned long long)numFoldersPopped;

@end

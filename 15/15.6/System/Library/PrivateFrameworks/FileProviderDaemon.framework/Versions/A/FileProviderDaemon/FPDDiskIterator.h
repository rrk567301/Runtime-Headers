@class NSURL, NSString, NSError;

@interface FPDDiskIterator : FPDIterator {
    NSString *_basePath;
    char _stopAccessingRoot;
    char _lastItemWasPackage;
    char _isFile;
    int _state;
    NSError *_error;
    unsigned long long _numFoldersPopped;
    struct { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent **x2; int x3; char *x4; int x5; int x6; int x7; union { void /* function */ *x0; id /* block */ x1; } x8; int x9; } *_fts;
    struct _ftsent { struct _ftsent *x0; struct _ftsent *x1; struct _ftsent *x2; long long x3; void *x4; char *x5; char *x6; int x7; int x8; unsigned short x9; unsigned short x10; unsigned long long x11; int x12; unsigned short x13; short x14; unsigned short x15; unsigned short x16; unsigned short x17; struct stat *x18; char x19[1]; } *_entry;
}

@property (readonly, nonatomic) NSURL *rootURL;

- (void)dealloc;
- (void).cxx_destruct;
- (id)error;
- (void)skipDescendants;
- (char)done;
- (id)nextWithError:(id *)a0;
- (id)initWithURL:(id)a0 isDirectory:(char)a1;
- (unsigned long long)numFoldersPopped;

@end

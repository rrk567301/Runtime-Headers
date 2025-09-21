@class NSString, NSMutableArray;
@protocol PFFileFilter;

@interface PFDirectoryEnumerator : NSEnumerator <NSCopying> {
    struct { int x0; long long x1; long long x2; char *x3; int x4; long long x5; long long x6; int x7; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x8; struct _telldir *x9; } *_DIR;
    char _recursive;
    NSMutableArray *_recursiveDirArray;
    int _recursionMode;
    char _enumerationFinished;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) int fileType;
@property (readonly, nonatomic) id<PFFileFilter> filterDelegate;
@property (readonly, nonatomic) int options;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)allObjects;
- (id)nextObject;
- (id)initWithPath:(id)a0;
- (id)initWithPath:(id)a0 filterDelegate:(id)a1;
- (id)initWithPath:(id)a0 filterDelegate:(id)a1 fileType:(int)a2;
- (id)initWithPath:(id)a0 filterDelegate:(id)a1 fileType:(int)a2 recursive:(char)a3 mode:(int)a4 options:(int)a5;
- (id)initWithPath:(id)a0 recursive:(char)a1;

@end

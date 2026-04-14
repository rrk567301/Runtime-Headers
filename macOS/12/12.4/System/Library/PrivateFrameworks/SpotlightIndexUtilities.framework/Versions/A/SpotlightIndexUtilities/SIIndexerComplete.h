@class NSString;

@interface SIIndexerComplete : NSObject

@property (copy, nonatomic) NSString *dirPath;
@property (nonatomic) struct __SI { } *si;
@property (nonatomic) struct _SIIndexCallbacks { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void *x17; } *syncCallbacks;
@property (readonly, nonatomic) int cancel;
@property (nonatomic) _Atomic unsigned int addDocumentCount;
@property (nonatomic) _Atomic unsigned int addDocumentForSplitCount;
@property (nonatomic) unsigned int completedDocumentCount;
@property (nonatomic) unsigned int completedBatchCount;

+ (void)initialize;
+ (void)setLogLevel:(int)a0;
+ (void)setLogLevelWarning;
+ (struct { unsigned int x0; int x1; unsigned int x2; unsigned int x3; void *x4; int x5; int x6; short x7; struct fsid { int x0[2]; } x8; union { unsigned int x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; } x1; } x9; struct MDCredential *x10; unsigned long long x11; } *)volumeParams;
+ (void)setLogLevelDebug;
+ (void)setLogLevelInfo;
+ (struct __SIUserCtx { } *)createUserContext:(id)a0;

- (void)dealloc;
- (void)close;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)commit;
- (id)initWithPath:(id)a0 options:(long long)a1 error:(id *)a2;
- (id)getPropertyForKey:(id)a0;
- (BOOL)merge;
- (void)deleteFilesInDirectory:(int)a0;
- (BOOL)openIndexWithDirFd:(int)a0 options:(long long)a1 error:(id *)a2;
- (void)addRecords:(id)a0 forIDs:(unsigned long long *)a1 completionHandler:(id /* block */)a2;

@end

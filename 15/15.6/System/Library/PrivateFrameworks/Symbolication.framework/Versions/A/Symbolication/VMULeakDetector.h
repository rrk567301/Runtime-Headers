@class VMUDebugTimer, VMUTask, NSMutableString, VMUTaskMemoryScanner, VMUProcessObjectGraph, NSMutableArray;
@protocol VMUStackLogReader;

@interface VMULeakDetector : NSObject {
    unsigned long long _max_contents_bytes;
    unsigned int _numExcluded;
}

@property (nonatomic) char showLeakedVMregions;
@property (nonatomic) char showContext;
@property (nonatomic) char showOnlyVMregions;
@property (nonatomic) char fullStacks;
@property (nonatomic) char showRawClassNames;
@property (nonatomic) char showBinaryContents;
@property (nonatomic) char checkAbandoned;
@property (nonatomic) char suppressOutput;
@property (nonatomic) char showListOfLeaks;
@property (nonatomic) char groupByType;
@property (nonatomic) char referenceTreeShowRegionVirtualSize;
@property (retain, nonatomic) VMUDebugTimer *debugTimer;
@property (nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *outputFile;
@property (retain, nonatomic) NSMutableString *outputString;
@property (nonatomic) char fcloseOutput;
@property (nonatomic) unsigned int objectContentLevel;
@property (readonly, nonatomic) VMUTask *task;
@property (readonly, nonatomic) VMUProcessObjectGraph *graph;
@property (readonly, nonatomic) VMUTaskMemoryScanner *scanner;
@property (readonly, nonatomic) id<VMUStackLogReader> stackLogReader;
@property (nonatomic) void *abandoned;
@property (nonatomic) void *leakedNodes;
@property (retain, nonatomic) NSMutableArray *leakTreeRootsArray;
@property (retain, nonatomic) VMUProcessObjectGraph *leakedGraph;
@property (nonatomic) unsigned int allocationsCount;
@property (nonatomic) unsigned long long allocationsSize;
@property (nonatomic) unsigned int leakedAllocationsCount;
@property (nonatomic) unsigned long long leakedAllocationsSize;
@property (nonatomic) unsigned int abandonedCount;
@property (nonatomic) unsigned long long abandonedSize;

+ (id)_consolidatedRootLeakDescriptionsForTree:(id)a0;
+ (id)consolidatedRootLeakDescriptionsForTree:(id)a0;
+ (id)referenceDescription:(struct { struct *x0; struct { unsigned long long x0; unsigned int x1; unsigned long long x2; } x1; struct *x2; })a0 dstDescription:(id)a1 is64bit:(char)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)doNormalLeakDetectionWithError:(out id *)a0;
- (void)buildLeakTree;
- (char)checkTaskExistence;
- (unsigned int)detectLeaksWithError:(out id *)a0;
- (id)initWithTask:(unsigned int)a0 graph:(id)a1 scanner:(id)a2 stackLogReader:(id)a3;
- (id)initWithVMUTask:(id)a0 graph:(id)a1 scanner:(id)a2 stackLogReader:(id)a3;
- (id)labelForNode:(unsigned int)a0 details:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })a1 shortLabel:(char)a2;
- (id)nodeDescription:(unsigned int)a0;
- (id)nodeDescription:(unsigned int)a0 usingDetails:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; } *)a1;
- (id)nodeTypeDescription:(unsigned int)a0 details:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; } *)a1 mallocBySize:(char)a2;
- (void)printContents:(void *)a0 size:(unsigned long long)a1;
- (void)printLeak:(const char *)a0 node:(unsigned int)a1 details:(struct { unsigned long long x0; unsigned long x1 : 60; unsigned char x2 : 4; id x3; })a2 region:(id)a3 stop:(char *)a4;
- (void)printLeakTree;
- (void)printout:(const char *)a0;
- (id)referenceDescription:(struct { struct *x0; struct { unsigned long long x0; unsigned int x1; unsigned long long x2; } x1; struct *x2; })a0 dstDescription:(id)a1 is64bit:(char)a2;
- (id)scannerOrGraph;

@end

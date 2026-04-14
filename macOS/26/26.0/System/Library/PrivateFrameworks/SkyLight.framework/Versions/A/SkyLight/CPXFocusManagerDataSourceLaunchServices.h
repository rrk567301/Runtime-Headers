@class NSString, NSMutableArray;
@protocol CPXLaunchServicesProviding, CPXProcessManaging;

@interface CPXFocusManagerDataSourceLaunchServices : NSObject <BSDescriptionStreaming, CPXFocusManagerDataSource> {
    id<CPXLaunchServicesProviding> _launchServicesProvider;
    id<CPXProcessManaging> _processManager;
    struct CPSProcessSerNum { unsigned int hi; unsigned int lo; } _processToBringForwardAtNextCheckinPSN;
    unsigned int _processToBringForwardAtNextCheckingSeed;
    struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *_gpFrontProc;
    NSMutableArray *_permittedFrontList;
    unsigned int _keyThiefConnectionID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *frontmostProcess;

- (void)dealloc;
- (void)appendDescriptionToStream:(id)a0;
- (void).cxx_destruct;
- (short)addToPermittedFrontList:(struct CPSProcessSerNum { unsigned int x0; unsigned int x1; })a0;
- (BOOL)getProcessToBringForwardAtNextCheckin:(struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } *)a0;
- (id)initWithLaunchServicesProvider:(id)a0 processManager:(id)a1;
- (BOOL)isProcessPermittedToBeFrontmost:(struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *)a0;
- (BOOL)isProcessToBringForwardAtNextCheckin:(struct CPSProcessSerNum { unsigned int x0; unsigned int x1; })a0;
- (unsigned int)keyThiefConnectionID;
- (short)removeFromPermittedFrontList:(struct CPSProcessSerNum { unsigned int x0; unsigned int x1; })a0;
- (short)setFrontmostProcess:(struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *)a0;
- (void)setKeyThiefConnectionID:(unsigned int)a0;
- (int)setProcessToBringForwardAtNextCheckin:(struct CPSProcessSerNum { unsigned int x0; unsigned int x1; })a0;

@end

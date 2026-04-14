@interface CPXMutableEventDeferringPolicy : CPXEventDeferringPolicy

@property (nonatomic) long long advicePolicy;
@property (nonatomic) struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *frontmostProcess;
@property (nonatomic) unsigned int keyThiefConnectionID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAdvicePolicy:(long long)a0;
- (void)setFrontmostProcess:(struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *)a0;
- (void)setKeyThiefConnectionID:(unsigned int)a0;

@end

@class BSAuditHistory;

@interface CPXEventDeferringPolicy : NSObject <NSCopying, NSMutableCopying> {
    long long _advicePolicy;
    struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *_frontmostProcess;
    BSAuditHistory *_auditHistory;
}

@property (readonly, nonatomic) long long advicePolicy;
@property (readonly, nonatomic) struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *frontmostProcess;
@property (nonatomic) unsigned int keyThiefConnectionID;
@property (readonly, nonatomic) BSAuditHistory *auditHistory;

+ (id)new;
+ (id)build:(id /* block */)a0;

- (id)_init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCopyOf:(id)a0;

@end

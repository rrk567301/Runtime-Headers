@protocol CPXProcessManaging, CPXFocusManagerDataSource;

@interface CPXEventDeferringPolicySanitizer : NSObject {
    id<CPXFocusManagerDataSource> _dataSource;
    id<CPXProcessManaging> _processManager;
}

- (void).cxx_destruct;
- (BOOL)_isValidProcess:(struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *)a0 auditHistory:(id)a1 debugProcessType:(id)a2;
- (void)_sanitizeFrontmost:(id)a0;
- (void)_sanitizeKeyThief:(id)a0;
- (id)initWithFocusManagerDataSource:(id)a0 processManager:(id)a1;
- (id)sanitize:(id)a0;

@end

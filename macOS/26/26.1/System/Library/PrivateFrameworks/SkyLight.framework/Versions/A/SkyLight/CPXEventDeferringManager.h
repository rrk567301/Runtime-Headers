@class CPXEventDeferringPolicy, WSEventDeliveryManager;
@protocol CPXConnectionManaging, CPXProcessManaging, BSInvalidatable;

@interface CPXEventDeferringManager : NSObject {
    WSEventDeliveryManager *_deliveryManager;
    id<CPXConnectionManaging> _connectionManager;
    id<CPXProcessManaging> _processManager;
    CPXEventDeferringPolicy *_enforcedPolicy;
    id<BSInvalidatable> _adviceRule;
    id<BSInvalidatable> _keyThiefRule;
    id<BSInvalidatable> _frontmostToPSNRule;
    id<BSInvalidatable> _psnToTargetRule;
}

@property (readonly, nonatomic) CPXEventDeferringPolicy *enforcedPolicy;

+ (id)_symbolicLinkTokenForProcess:(struct CPSProcessRec { unsigned int x0; struct CPSProcessSerNum { unsigned int x0; unsigned int x1; } x1; int x2; struct CPSProcessRec *x3; struct CPSProcessRec *x4; struct CPSProcessRec *x5; int x6; BOOL x7; unsigned int x8; char *x9; void /* function */ *x10; unsigned int x11; unsigned int x12; BOOL x13; BOOL x14; int x15; struct __LSASN *x16; unsigned char x17; int x18; BOOL x19; unsigned int x20; } *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDeliveryManager:(id)a0 processManager:(id)a1 connectionManager:(id)a2;
- (void)updatePolicy:(id)a0 reason:(id)a1;

@end

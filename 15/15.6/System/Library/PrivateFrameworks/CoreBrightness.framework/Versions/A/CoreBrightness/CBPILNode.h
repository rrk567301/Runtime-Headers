@class CBPILParams;

@interface CBPILNode : NSObject

@property (readonly) CBPILParams *cil;
@property (readonly) CBPILParams *mil;

- (void)dealloc;
- (id)initWithCILService:(unsigned int)a0 andMILService:(unsigned int)a1;

@end

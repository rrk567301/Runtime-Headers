@class NSString;

@interface ULPeripheralControlDelegateWrapper : NSObject <MicroLocationDaemon.ULPeripheralControlDelegate>

@property (nonatomic) struct ULPeripheralControlDelegateCppInterface { void /* function */ **x0; } *cppInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCppInterface:(struct ULPeripheralControlDelegateCppInterface { void /* function */ **x0; } *)a0;
- (void)onPeripheralAvailable;
- (void)onPeripheralUnavailable;

@end

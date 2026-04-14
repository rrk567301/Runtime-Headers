@class AVBInterface;

@interface AVBgPTPEthernetPort : TSgPTPEthernetPort

@property (readonly, weak) AVBInterface *interface;

- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (id)initWithInterfaceName:(id)a0;
- (void)serviceTerminated;

@end

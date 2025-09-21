@class AVBInterface;

@interface AVBPTPEthernetPort : AVBPTPFDPtPPort

@property (readonly, weak) AVBInterface *interface;

+ (id)iokitMatchingDictionaryForInterfaceName:(id)a0;

- (id)initWithInterface:(id)a0;
- (void).cxx_destruct;
- (void)serviceTerminated;

@end

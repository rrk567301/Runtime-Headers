@class AXAuditObjectTransportInfo;

@interface AXAuditObjectTransportInfoMasquerade : AXAuditObjectTransportInfo

@property (retain, nonatomic) Class masqueradeAsClass;
@property (retain, nonatomic) AXAuditObjectTransportInfo *masqueradeTransportInfo;
@property (copy, nonatomic) id /* block */ createMasqueradeObjectBlock;
@property (copy, nonatomic) id /* block */ createLocalObjectWithMasqueradeObjectBlock;

- (void).cxx_destruct;
- (id)init;
- (void)_initializeBlocks;

@end

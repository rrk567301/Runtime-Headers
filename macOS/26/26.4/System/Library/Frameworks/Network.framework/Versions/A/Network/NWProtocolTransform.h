@class NWEndpoint, NSObject;
@protocol OS_nw_protocol_transform;

@interface NWProtocolTransform : NSObject <NWPrettyDescription>

@property (retain) NSObject<OS_nw_protocol_transform> *internalTransform;
@property (nonatomic) BOOL noProxy;
@property (nonatomic) int multipathService;
@property (copy, nonatomic) NWEndpoint *replacementEndpoint;
@property (nonatomic) BOOL tfo;
@property (nonatomic) BOOL tfoNoCookie;
@property (nonatomic) int dataMode;
@property (nonatomic) unsigned long long fallbackMode;
@property (nonatomic) BOOL prohibitDirect;
@property (nonatomic) BOOL disablePathFallback;

- (id)privateDescription;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (void)setFastOpenForceEnable:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)fastOpenForceEnable;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)appendProtocol:(id)a0 atLevel:(int)a1;
- (void)clearProtocolsAtLevel:(int)a0;
- (void)disableProtocol:(struct nw_protocol_identifier { char x0[32]; int x1; int x2; } *)a0;
- (id)initWithCTransform:(id)a0;

@end

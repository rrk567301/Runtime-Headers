@class MTLDepthStencilDescriptor;

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState

@property (readonly, nonatomic) MTLDepthStencilDescriptor *descriptor;
@property (readonly, nonatomic) unsigned char attachmentWriteMask;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (id)initWithDepthStencilState:(id)a0 descriptor:(id)a1 device:(id)a2;

@end

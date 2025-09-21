@interface VCMediaNegotiatorBandwidthConfiguration : NSObject

@property (nonatomic) unsigned char mode;
@property (nonatomic) int connectionType;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) char isDefaultMode;

- (char)isEqual:(id)a0;
- (id)initWithArbiterMode:(unsigned char)a0 connectionType:(int)a1 maxBandwidth:(unsigned int)a2;
- (id)initWithConnectionType:(int)a0 maxBandwidth:(unsigned int)a1;

@end

@class NSMutableSet;

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>

@property (retain, nonatomic) NSMutableSet *supportedAudioPayloads;

- (id)init;
- (void)addPayload:(int)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end

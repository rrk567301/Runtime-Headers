@class AVAudioChannelLayout, NSArray;

@interface AuRA_IOTopologyIOStream : NSObject <NSCopying>

@property (nonatomic) unsigned char ioAdaptationPolicy;
@property (retain, nonatomic) AVAudioChannelLayout *channelLayout;
@property (retain, nonatomic) NSArray *ioStreamMappings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

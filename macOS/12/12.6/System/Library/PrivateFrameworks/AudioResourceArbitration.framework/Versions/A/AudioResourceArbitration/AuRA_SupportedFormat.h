@class AVAudioFormat, NSArray;

@interface AuRA_SupportedFormat : NSObject

@property (retain, nonatomic) AVAudioFormat *audioFormat;
@property (retain, nonatomic) NSArray *sampleRateRanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

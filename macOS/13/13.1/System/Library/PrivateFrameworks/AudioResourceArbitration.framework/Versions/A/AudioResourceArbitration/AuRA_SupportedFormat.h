@class AVAudioFormat, NSArray;

@interface AuRA_SupportedFormat : NSObject

@property (retain, nonatomic) AVAudioFormat *audioFormat;
@property (retain, nonatomic) NSArray *sampleRateRanges;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

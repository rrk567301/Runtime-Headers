@class AVAudioFormat, NSArray;

@interface AuRA_SupportedFormat : NSObject

@property (retain, nonatomic) AVAudioFormat *audioFormat;
@property (retain, nonatomic) NSArray *sampleRateRanges;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

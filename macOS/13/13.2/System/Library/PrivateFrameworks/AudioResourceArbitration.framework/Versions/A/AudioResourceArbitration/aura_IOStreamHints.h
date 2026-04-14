@class NSNumber, AVAudioFormat;

@interface AuRA_IOStreamHints : NSObject <NSCopying>

@property (nonatomic) unsigned int streamIndex;
@property (retain, nonatomic) NSNumber *dspFlavor;
@property (retain, nonatomic) AVAudioFormat *format;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end

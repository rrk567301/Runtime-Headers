@class NSNumber, AVAudioFormat;

@interface AuRA_IOStreamHints : NSObject <NSCopying>

@property (nonatomic) unsigned int streamIndex;
@property (retain, nonatomic) NSNumber *dspFlavor;
@property (retain, nonatomic) AVAudioFormat *format;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
